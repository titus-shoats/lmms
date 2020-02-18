// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef PresetsUI_h
#define PresetsUI_h
#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <stdio.h>
#include <stdlib.h>
#include "../Params/Presets.h"

class PresetsUI_ {
public:
  virtual void refresh();
  virtual ~PresetsUI_();
};
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>

class PresetsUI {
public:
  PresetsUI();
  ~PresetsUI();
  Fl_Double_Window* make_window();
  Fl_Double_Window *copywin;
  Fl_Browser *copybrowse;
private:
  inline void cb_copybrowse_i(Fl_Browser*, void*);
  static void cb_copybrowse(Fl_Browser*, void*);
public:
  Fl_Button *copypbutton;
private:
  inline void cb_copypbutton_i(Fl_Button*, void*);
  static void cb_copypbutton(Fl_Button*, void*);
public:
  Fl_Button *copybutton;
private:
  inline void cb_copybutton_i(Fl_Button*, void*);
  static void cb_copybutton(Fl_Button*, void*);
  inline void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
public:
  Fl_Box *copytypetext;
  Fl_Input *presetname;
private:
  inline void cb_presetname_i(Fl_Input*, void*);
  static void cb_presetname(Fl_Input*, void*);
public:
  Fl_Double_Window *pastewin;
  Fl_Browser *pastebrowse;
private:
  inline void cb_pastebrowse_i(Fl_Browser*, void*);
  static void cb_pastebrowse(Fl_Browser*, void*);
public:
  Fl_Button *pastepbutton;
private:
  inline void cb_pastepbutton_i(Fl_Button*, void*);
  static void cb_pastepbutton(Fl_Button*, void*);
public:
  Fl_Button *pastebutton;
private:
  inline void cb_pastebutton_i(Fl_Button*, void*);
  static void cb_pastebutton(Fl_Button*, void*);
  inline void cb_Cancel1_i(Fl_Button*, void*);
  static void cb_Cancel1(Fl_Button*, void*);
public:
  Fl_Box *pastetypetext;
  Fl_Button *deletepbutton;
private:
  inline void cb_deletepbutton_i(Fl_Button*, void*);
  static void cb_deletepbutton(Fl_Button*, void*);
public:
  void copy(Presets *p);
  void paste(Presets *p,PresetsUI_ *pui);
  void copy(Presets *p,int n);
  void paste(Presets *p,PresetsUI_ *pui,int n);
  void rescan();
  Presets *p; 
  PresetsUI_ *pui; 
  void copyArray(Presets *p);
  void pasteArray(Presets *p,PresetsUI_ *pui);
  void rescanArray();
  bool p_is_PresetArray; 
};
extern PresetsUI *presetsui; 
#endif
