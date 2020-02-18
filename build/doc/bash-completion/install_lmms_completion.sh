#!/bin/bash
set -e
if [ -w "/usr/share/bash-completion/completions" ]; then
  BASHCOMP_PKG_PATH="/usr/share/bash-completion/completions"
else 
  BASHCOMP_PKG_PATH="$DESTDIR/share/bash-completion/completions"
fi
echo -e "\nInstalling bash completion...\n"
mkdir -p "$BASHCOMP_PKG_PATH"
cp "/root/lmms/doc/bash-completion/lmms" "$BASHCOMP_PKG_PATH"
chmod a+r "$BASHCOMP_PKG_PATH/lmms"
echo -e "Bash completion for lmms has been installed to $BASHCOMP_PKG_PATH/lmms"
