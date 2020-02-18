#!/usr/bin/env bash
# Creates Linux ".AppImage" for LMMS
#
# Depends:  linuxdeployqt
#
# Notes:    Will attempt to fetch linuxdeployqt automatically (x86_64 only)
#           See Also: https://github.com/probonopd/linuxdeployqt/blob/master/BUILDING.md

set -e

LINUXDEPLOYQT="/root/lmms/build/linuxdeployqt"
VERBOSITY=2 # 3=debug
LOGFILE="/root/lmms/build/appimage.log"
APPDIR="/root/lmms/build/LMMS.AppDir/"
DESKTOPFILE="${APPDIR}usr/share/applications/lmms.desktop"
STRIP=""

# Don't strip for Debug|RelWithDebInfo builds
# shellcheck disable=SC2193
if [[ "Debug" == *"Deb"* ]]; then
	STRIP="-no-strip"
fi

# Console colors
RED="\\x1B[1;31m"
GREEN="\\x1B[1;32m"
YELLOW="\\x1B[1;33m"
PLAIN="\\x1B[0m"

function error {
	echo -e "   ${PLAIN}[${RED}error${PLAIN}] ${1}"
	return 1
}

function success {
	echo -e "   ${PLAIN}[${GREEN}success${PLAIN}] ${1}"
}

function skipped {
	echo -e "   ${PLAIN}[${YELLOW}skipped${PLAIN}] ${1}"
}

# Blindly assume system arch is appimage arch
ARCH=$(arch)
export ARCH

# Check for problematic install locations
INSTALL=$(echo "" | sed 's/\/*$//g')
if [ "$INSTALL" == "/usr/local" ] || [ "$INSTALL" == "/usr" ] ; then
	error "Incompatible CMAKE_INSTALL_PREFIX for creating AppImage: "
fi

echo -e "\nWriting verbose output to \"${LOGFILE}\""

# Ensure linuxdeployqt uses the same qmake version as cmake
PATH="$(pwd -P)/squashfs-root/usr/bin:$(dirname "/usr/lib/x86_64-linux-gnu/qt5/bin/qmake")":$PATH
export PATH

# Fetch portable linuxdeployqt if not in PATH
APPIMAGETOOL="squashfs-root/usr/bin/appimagetool"
echo -e "\nDownloading linuxdeployqt to ${LINUXDEPLOYQT}..."
if env -i which linuxdeployqt > /dev/null 2>&1; then
	skipped "System already provides this utility"
else
	filename="linuxdeployqt-continuous-$(uname -p).AppImage"
	url="https://github.com/probonopd/linuxdeployqt/releases/download/continuous/$filename"
	down_file="$(pwd)/$filename"
	if [ ! -f "$LINUXDEPLOYQT" ]; then
		ln -s "$down_file" "$LINUXDEPLOYQT"
	fi
	echo "   [.......] Downloading ($(uname -p)): ${url}"
	wget -N -q "$url" || (rm "$filename" && false)
	chmod +x "$LINUXDEPLOYQT"
	success "Downloaded $LINUXDEPLOYQT"
	# Extract AppImage and replace LINUXDEPLOYQT variable with extracted binary
	# to support systems without fuse
	# Also, we need to set LD_LIBRARY_PATH, but linuxdepoyqt's AppRun unsets it
	# See https://github.com/probonopd/linuxdeployqt/pull/370/
	"$LINUXDEPLOYQT" --appimage-extract > /dev/null 2>&1
	LINUXDEPLOYQT="squashfs-root/usr/bin/linuxdeployqt"
	success "Extracted $APPIMAGETOOL"
fi

# Make skeleton AppDir
echo -e "\nCreating ${APPDIR}..."
rm -rf "${APPDIR}"
mkdir -p "${APPDIR}usr"
success "Created ${APPDIR}"

# Clone install to AppDir
echo -e "\nCopying  to ${APPDIR}..."
cp -R "/." "${APPDIR}usr"
rm -rf "${APPDIR}usr/include"
success "${APPDIR}"

# Copy rawwaves directory for stk/mallets
mkdir -p "${APPDIR}usr/share/stk/"
cp -R /usr/share/stk/rawwaves/ "${APPDIR}usr/share/stk/"

# Create a wrapper script which calls the lmms executable
mv "${APPDIR}usr/bin/lmms" "${APPDIR}usr/bin/lmms.real"
# shellcheck disable=SC1083
cat >"${APPDIR}usr/bin/lmms" <<EOL
#!/usr/bin/env bash
DIR="\$( cd "\$( dirname "\${BASH_SOURCE[0]}" )" && pwd )"
export PATH="\$PATH:/sbin"
if which carla > /dev/null 2>&1; then
   CARLAPATH="\$(which carla)"
   CARLAPREFIX="\${CARLAPATH%/bin*}"
   echo "Carla appears to be installed on this system at \$CARLAPREFIX/lib[64]/carla so we'll use it."
   export LD_LIBRARY_PATH=\$CARLAPREFIX/lib/carla:\$CARLAPREFIX/lib64/carla:\$LD_LIBRARY_PATH
else
   echo "Carla does not appear to be installed.  That's OK, please ignore any related library errors."
fi
export LD_LIBRARY_PATH=\$DIR/usr/lib/:\$DIR/usr/lib/lmms:\$LD_LIBRARY_PATH
# Prevent segfault on VirualBox
if lsmod |grep vboxguest > /dev/null 2>&1; then
   echo "VirtualBox detected.  Forcing libgl software rendering."
   export LIBGL_ALWAYS_SOFTWARE=1;
fi
if ldconfig -p | grep libjack.so.0 > /dev/null 2>&1; then
   echo "Jack appears to be installed on this system, so we'll use it."
else
   echo "Jack does not appear to be installed.  That's OK, we'll use a dummy version instead."
   export LD_LIBRARY_PATH=\$DIR/usr/lib/lmms/optional:\$LD_LIBRARY_PATH
fi
QT_X11_NO_NATIVE_MENUBAR=1 \$DIR/usr/bin/lmms.real "\$@"
EOL

chmod +x "${APPDIR}usr/bin/lmms"

# Per https://github.com/probonopd/linuxdeployqt/issues/129
unset LD_LIBRARY_PATH

# Ensure linuxdeployqt can find shared objects
export LD_LIBRARY_PATH="${APPDIR}usr/lib/lmms/":$LD_LIBRARY_PATH

# Handle wine linking
if [ -d "/usr/lib/i386-linux-gnu/wine/" ]; then
   export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib/i386-linux-gnu/wine/
fi
if [ -d "/usr/lib/x86_64-linux-gnu/wine/" ]; then
   export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib/x86_64-linux-gnu/wine/
fi

# Move executables so linuxdeployqt can find them
ZYNLIB="${APPDIR}usr/lib/lmms/RemoteZynAddSubFx"
VSTLIB32="${APPDIR}usr/lib/lmms/32/RemoteVstPlugin32.exe.so"
VSTLIB64="${APPDIR}usr/lib/lmms/RemoteVstPlugin64.exe.so"

ZYNBIN="${APPDIR}usr/bin/RemoteZynAddSubFx"
VSTBIN32="${APPDIR}usr/bin/RemoteVstPlugin32.exe.so"
VSTBIN64="${APPDIR}usr/bin/RemoteVstPlugin64.exe.so"

mv "$ZYNLIB" "$ZYNBIN"
mv "$VSTLIB32" "$VSTBIN32"
mv "$VSTLIB64" "$VSTBIN64"

# Patch the desktop file
sed -i 's/.*Exec=.*/Exec=lmms.real/' "$DESKTOPFILE"

# Fix linking for soft-linked plugins
for file in "${APPDIR}usr/lib/lmms/"*.so; do
   thisfile="${APPDIR}usr/lib/lmms/${file##*/}"
   executables="${executables} -executable=$thisfile"
done
executables="${executables} -executable=${ZYNBIN}"
executables="${executables} -executable=${VSTBIN32}"
executables="${executables} -executable=${VSTBIN64}"
executables="${executables} -executable=${APPDIR}usr/lib/lmms/ladspa/imp_1199.so"
executables="${executables} -executable=${APPDIR}usr/lib/lmms/ladspa/imbeq_1197.so"
executables="${executables} -executable=${APPDIR}usr/lib/lmms/ladspa/pitch_scale_1193.so"
executables="${executables} -executable=${APPDIR}usr/lib/lmms/ladspa/pitch_scale_1194.so"

# Bundle both qt and non-qt dependencies into appimage format
echo -e "\nBundling and relinking system dependencies..."
echo -e ">>>>> linuxdeployqt" > "$LOGFILE"

# shellcheck disable=SC2086
"$LINUXDEPLOYQT" "$DESKTOPFILE" $executables -bundle-non-qt-libs -verbose=$VERBOSITY $STRIP >> "$LOGFILE" 2>&1
success "Bundled and relinked dependencies"

# Link to original location so lmms can find them
ln -sr  "$ZYNBIN" "$ZYNLIB"
ln -sr  "$VSTBIN32" "$VSTLIB32"
ln -sr  "$VSTBIN64" "$VSTLIB64"

# Remove wine library conflict
rm -f "${APPDIR}/usr/lib/libwine.so.1"

# Use system-provided carla
rm -f "${APPDIR}usr/lib/"libcarla*.so

# Remove bundled jack in LD_LIBRARY_PATH if exists
if [ -e "${APPDIR}/usr/lib/libjack.so.0" ]; then
   rm "${APPDIR}/usr/lib/libjack.so.0"
fi

# Bundle jack out of LD_LIBRARY_PATH
JACK_LIB=$(ldd "${APPDIR}/usr/bin/lmms.real" | sed -n 's/\tlibjack\.so\.0 => \(.\+\) (0x[0-9a-f]\+)/\1/p')
if [ -e "$JACK_LIB" ]; then
   mkdir -p "${APPDIR}usr/lib/lmms/optional/"
   cp "$JACK_LIB" "${APPDIR}usr/lib/lmms/optional/"
fi

# Point the AppRun to the shim launcher
rm -f "${APPDIR}/AppRun"
ln -sr "${APPDIR}/usr/bin/lmms" "${APPDIR}/AppRun"

# Create AppImage
echo -e "\nFinishing the AppImage..."
echo -e "\n\n>>>>> appimagetool" >> "$LOGFILE"
"$APPIMAGETOOL" "${APPDIR}" "/root/lmms/build/lmms-1.2.1.581-linux-x86_64.AppImage" >> "$LOGFILE" 2>&1
success "Created /root/lmms/build/lmms-1.2.1.581-linux-x86_64.AppImage"

echo -e "\nFinished"
