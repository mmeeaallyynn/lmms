// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef ADnoteUI_h
#define ADnoteUI_h
#include <FL/Fl.H>
#include "../Params/ADnoteParameters.h"
#include "../Misc/Util.h"
#include "../Misc/Master.h"
#include "ResonanceUI.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>
#include "WidgetPDial.h"
#include "EnvelopeUI.h"
#include "LFOUI.h"
#include "FilterUI.h"
#include "OscilGenUI.h"
#include "PresetsUI.h"
#include <FL/Fl_Group.H>
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Box.H>

class ADvoicelistitem : public Fl_Group {
  Fl_Group* make_window();
  Fl_Group *ADnoteVoiceListItem;
  Fl_Group *voicelistitemgroup;
public:
  Fl_Value_Slider *voicevolume;
private:
  void cb_voicevolume_i(Fl_Value_Slider*, void*);
  static void cb_voicevolume(Fl_Value_Slider*, void*);
public:
  Fl_Check_Button *voiceresonanceenabled;
private:
  void cb_voiceresonanceenabled_i(Fl_Check_Button*, void*);
  static void cb_voiceresonanceenabled(Fl_Check_Button*, void*);
public:
  Fl_Value_Slider *voicelfofreq;
private:
  void cb_voicelfofreq_i(Fl_Value_Slider*, void*);
  static void cb_voicelfofreq(Fl_Value_Slider*, void*);
public:
  WidgetPDial *voicepanning;
private:
  void cb_voicepanning_i(WidgetPDial*, void*);
  static void cb_voicepanning(WidgetPDial*, void*);
public:
  Fl_Group *voiceoscil;
  Fl_Value_Output *detunevalueoutput;
private:
  void cb_detunevalueoutput_i(Fl_Value_Output*, void*);
  static void cb_detunevalueoutput(Fl_Value_Output*, void*);
public:
  Fl_Slider *voicedetune;
private:
  void cb_voicedetune_i(Fl_Slider*, void*);
  static void cb_voicedetune(Fl_Slider*, void*);
public:
  Fl_Box *noiselabel;
private:
  void cb_noiselabel_i(Fl_Box*, void*);
  static void cb_noiselabel(Fl_Box*, void*);
  Fl_Check_Button *voiceenabled;
  void cb_voiceenabled_i(Fl_Check_Button*, void*);
  static void cb_voiceenabled(Fl_Check_Button*, void*);
public:
  ADvoicelistitem(int x,int y, int w, int h, const char *label=0);
  void init(ADnoteParameters *parameters,int nvoice_,Master *master_);
  void refreshlist();
  ~ADvoicelistitem();
private:
  ADnoteParameters *pars; 
  int nvoice; 
  Oscilloscope *osc; 
  Master *master; 
};
#include <FL/Fl_Counter.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Button.H>

class ADvoiceUI : public Fl_Group {
public:
  Fl_Group* make_window();
  Fl_Group *ADnoteVoiceParameters;
  Fl_Group *voiceparametersgroup;
  Fl_Group *voicemodegroup;
  Fl_Group *voiceFMparametersgroup;
  Fl_Group *modfrequency;
  EnvelopeUI *voiceFMfreqenvgroup;
private:
  void cb_Enable_i(Fl_Check_Button*, void*);
  static void cb_Enable(Fl_Check_Button*, void*);
  void cb_Coarse_i(Fl_Counter*, void*);
  static void cb_Coarse(Fl_Counter*, void*);
  void cb_Octave_i(Fl_Counter*, void*);
  static void cb_Octave(Fl_Counter*, void*);
  void cb__i(Fl_Slider*, void*);
  static void cb_(Fl_Slider*, void*);
public:
  Fl_Value_Output *fmdetunevalueoutput;
private:
  void cb_fmdetunevalueoutput_i(Fl_Value_Output*, void*);
  static void cb_fmdetunevalueoutput(Fl_Value_Output*, void*);
  void cb_Detune_i(Fl_Choice*, void*);
  static void cb_Detune(Fl_Choice*, void*);
  void cb_Vol_i(Fl_Value_Slider*, void*);
  static void cb_Vol(Fl_Value_Slider*, void*);
  void cb_V_i(Fl_Value_Slider*, void*);
  static void cb_V(Fl_Value_Slider*, void*);
public:
  EnvelopeUI *voiceFMampenvgroup;
private:
  void cb_Enable1_i(Fl_Check_Button*, void*);
  static void cb_Enable1(Fl_Check_Button*, void*);
  void cb_F_i(Fl_Value_Slider*, void*);
  static void cb_F(Fl_Value_Slider*, void*);
public:
  Fl_Group *modoscil;
  Fl_Group *fmoscil;
  Fl_Button *changeFMoscilbutton;
private:
  void cb_changeFMoscilbutton_i(Fl_Button*, void*);
  static void cb_changeFMoscilbutton(Fl_Button*, void*);
  void cb_Phase_i(Fl_Slider*, void*);
  static void cb_Phase(Fl_Slider*, void*);
  void cb_Use_i(Fl_Choice*, void*);
  static void cb_Use(Fl_Choice*, void*);
  void cb_External_i(Fl_Choice*, void*);
  static void cb_External(Fl_Choice*, void*);
  void cb_Type_i(Fl_Choice*, void*);
  static void cb_Type(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Type[];
public:
  EnvelopeUI *voicefreqenvgroup;
private:
  void cb_Enable2_i(Fl_Check_Button*, void*);
  static void cb_Enable2(Fl_Check_Button*, void*);
public:
  LFOUI *voicefreqlfogroup;
private:
  void cb_Enable3_i(Fl_Check_Button*, void*);
  static void cb_Enable3(Fl_Check_Button*, void*);
  void cb_Octave1_i(Fl_Counter*, void*);
  static void cb_Octave1(Fl_Counter*, void*);
  void cb_Coarse1_i(Fl_Counter*, void*);
  static void cb_Coarse1(Fl_Counter*, void*);
  void cb_1_i(Fl_Slider*, void*);
  static void cb_1(Fl_Slider*, void*);
public:
  Fl_Value_Output *detunevalueoutput;
private:
  void cb_detunevalueoutput1_i(Fl_Value_Output*, void*);
  static void cb_detunevalueoutput1(Fl_Value_Output*, void*);
  void cb_440Hz_i(Fl_Check_Button*, void*);
  static void cb_440Hz(Fl_Check_Button*, void*);
public:
  WidgetPDial *fixedfreqetdial;
private:
  void cb_fixedfreqetdial_i(WidgetPDial*, void*);
  static void cb_fixedfreqetdial(WidgetPDial*, void*);
  void cb_Detune1_i(Fl_Choice*, void*);
  static void cb_Detune1(Fl_Choice*, void*);
public:
  Fl_Group *voiceoscil;
  Fl_Button *changevoiceoscilbutton;
private:
  void cb_changevoiceoscilbutton_i(Fl_Button*, void*);
  static void cb_changevoiceoscilbutton(Fl_Button*, void*);
  void cb_Phase1_i(Fl_Slider*, void*);
  static void cb_Phase1(Fl_Slider*, void*);
  void cb_R_i(Fl_Check_Button*, void*);
  static void cb_R(Fl_Check_Button*, void*);
  void cb_Use1_i(Fl_Choice*, void*);
  static void cb_Use1(Fl_Choice*, void*);
  void cb_Stereo_i(WidgetPDial*, void*);
  static void cb_Stereo(WidgetPDial*, void*);
  void cb_Unison_i(Fl_Choice*, void*);
  static void cb_Unison(Fl_Choice*, void*);
  void cb_Vibratto_i(WidgetPDial*, void*);
  static void cb_Vibratto(WidgetPDial*, void*);
  void cb_Invert_i(Fl_Choice*, void*);
  static void cb_Invert(Fl_Choice*, void*);
  void cb_Frequency_i(Fl_Slider*, void*);
  static void cb_Frequency(Fl_Slider*, void*);
public:
  Fl_Value_Output *unisonspreadoutput;
private:
  void cb_unisonspreadoutput_i(Fl_Value_Output*, void*);
  static void cb_unisonspreadoutput(Fl_Value_Output*, void*);
  void cb_Vib_i(WidgetPDial*, void*);
  static void cb_Vib(WidgetPDial*, void*);
  void cb_Vol1_i(Fl_Value_Slider*, void*);
  static void cb_Vol1(Fl_Value_Slider*, void*);
  void cb_V1_i(Fl_Value_Slider*, void*);
  static void cb_V1(Fl_Value_Slider*, void*);
public:
  EnvelopeUI *voiceampenvgroup;
private:
  void cb_Pan_i(WidgetPDial*, void*);
  static void cb_Pan(WidgetPDial*, void*);
  void cb_Enable4_i(Fl_Check_Button*, void*);
  static void cb_Enable4(Fl_Check_Button*, void*);
public:
  LFOUI *voiceamplfogroup;
private:
  void cb_Enable5_i(Fl_Check_Button*, void*);
  static void cb_Enable5(Fl_Check_Button*, void*);
  void cb_Minus_i(Fl_Check_Button*, void*);
  static void cb_Minus(Fl_Check_Button*, void*);
public:
  Fl_Group *voicefiltergroup;
  EnvelopeUI *voicefilterenvgroup;
private:
  void cb_Enable6_i(Fl_Check_Button*, void*);
  static void cb_Enable6(Fl_Check_Button*, void*);
public:
  LFOUI *voicefilterlfogroup;
private:
  void cb_Enable7_i(Fl_Check_Button*, void*);
  static void cb_Enable7(Fl_Check_Button*, void*);
  void cb_2_i(Fl_Choice*, void*);
  static void cb_2(Fl_Choice*, void*);
  static Fl_Menu_Item menu_[];
public:
  Fl_Check_Button *bypassfiltercheckbutton;
private:
  void cb_bypassfiltercheckbutton_i(Fl_Check_Button*, void*);
  static void cb_bypassfiltercheckbutton(Fl_Check_Button*, void*);
  void cb_Delay_i(Fl_Value_Slider*, void*);
  static void cb_Delay(Fl_Value_Slider*, void*);
  void cb_Enable8_i(Fl_Check_Button*, void*);
  static void cb_Enable8(Fl_Check_Button*, void*);
public:
  Fl_Box *noiselabel;
private:
  void cb_noiselabel1_i(Fl_Box*, void*);
  static void cb_noiselabel1(Fl_Box*, void*);
public:
  Fl_Check_Button *voiceonbutton;
private:
  void cb_voiceonbutton_i(Fl_Check_Button*, void*);
  static void cb_voiceonbutton(Fl_Check_Button*, void*);
public:
  ADvoiceUI(int x,int y, int w, int h, const char *label=0);
  void init(ADnoteParameters *parameters,int nvoice_,Master *master_);
  ~ADvoiceUI();
private:
  int nvoice; 
  ADnoteParameters *pars; 
  OscilEditor *oscedit; 
  Oscilloscope *osc; 
  Oscilloscope *oscFM; 
  Master *master; 
};
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Pack.H>

class ADnoteUI : public PresetsUI_ {
  Fl_Double_Window* make_window();
public:
  Fl_Double_Window *ADnoteGlobalParameters;
  EnvelopeUI *freqenv;
  Fl_Counter *octave;
private:
  void cb_octave_i(Fl_Counter*, void*);
  static void cb_octave(Fl_Counter*, void*);
public:
  Fl_Counter *coarsedet;
private:
  void cb_coarsedet_i(Fl_Counter*, void*);
  static void cb_coarsedet(Fl_Counter*, void*);
public:
  LFOUI *freqlfo;
  Fl_Slider *freq;
private:
  void cb_freq_i(Fl_Slider*, void*);
  static void cb_freq(Fl_Slider*, void*);
public:
  Fl_Value_Output *detunevalueoutput;
private:
  void cb_detunevalueoutput2_i(Fl_Value_Output*, void*);
  static void cb_detunevalueoutput2(Fl_Value_Output*, void*);
public:
  Fl_Choice *detunetype;
private:
  void cb_detunetype_i(Fl_Choice*, void*);
  static void cb_detunetype(Fl_Choice*, void*);
  void cb_relBW_i(WidgetPDial*, void*);
  static void cb_relBW(WidgetPDial*, void*);
public:
  Fl_Value_Slider *volume;
private:
  void cb_volume_i(Fl_Value_Slider*, void*);
  static void cb_volume(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *vsns;
private:
  void cb_vsns_i(Fl_Value_Slider*, void*);
  static void cb_vsns(Fl_Value_Slider*, void*);
public:
  WidgetPDial *pan;
private:
  void cb_pan_i(WidgetPDial*, void*);
  static void cb_pan(WidgetPDial*, void*);
public:
  WidgetPDial *pstr;
private:
  void cb_pstr_i(WidgetPDial*, void*);
  static void cb_pstr(WidgetPDial*, void*);
public:
  WidgetPDial *pt;
private:
  void cb_pt_i(WidgetPDial*, void*);
  static void cb_pt(WidgetPDial*, void*);
public:
  WidgetPDial *pstc;
private:
  void cb_pstc_i(WidgetPDial*, void*);
  static void cb_pstc(WidgetPDial*, void*);
public:
  WidgetPDial *pvel;
private:
  void cb_pvel_i(WidgetPDial*, void*);
  static void cb_pvel(WidgetPDial*, void*);
public:
  EnvelopeUI *ampenv;
  LFOUI *amplfo;
  Fl_Check_Button *rndgrp;
private:
  void cb_rndgrp_i(Fl_Check_Button*, void*);
  static void cb_rndgrp(Fl_Check_Button*, void*);
public:
  EnvelopeUI *filterenv;
  LFOUI *filterlfo;
  FilterUI *filterui;
  Fl_Check_Button *stereo;
private:
  void cb_stereo_i(Fl_Check_Button*, void*);
  static void cb_stereo(Fl_Check_Button*, void*);
  void cb_Show_i(Fl_Button*, void*);
  static void cb_Show(Fl_Button*, void*);
  void cb_Show1_i(Fl_Button*, void*);
  static void cb_Show1(Fl_Button*, void*);
  void cb_Close_i(Fl_Button*, void*);
  static void cb_Close(Fl_Button*, void*);
  void cb_Resonance_i(Fl_Button*, void*);
  static void cb_Resonance(Fl_Button*, void*);
  void cb_C_i(Fl_Button*, void*);
  static void cb_C(Fl_Button*, void*);
  void cb_P_i(Fl_Button*, void*);
  static void cb_P(Fl_Button*, void*);
public:
  Fl_Double_Window *ADnoteVoice;
  ADvoiceUI *advoice;
private:
  void cb_Close1_i(Fl_Button*, void*);
  static void cb_Close1(Fl_Button*, void*);
public:
  Fl_Counter *currentvoicecounter;
private:
  void cb_currentvoicecounter_i(Fl_Counter*, void*);
  static void cb_currentvoicecounter(Fl_Counter*, void*);
  void cb_C1_i(Fl_Button*, void*);
  static void cb_C1(Fl_Button*, void*);
  void cb_P1_i(Fl_Button*, void*);
  static void cb_P1(Fl_Button*, void*);
public:
  Fl_Double_Window *ADnoteVoiceList;
private:
  void cb_Hide_i(Fl_Button*, void*);
  static void cb_Hide(Fl_Button*, void*);
public:
  ADnoteUI(ADnoteParameters *parameters,Master *master_);
  ~ADnoteUI();
  void refresh();
private:
  ADnoteParameters *pars; 
  ResonanceUI *resui; 
  Master *master; 
  int nvoice; 
  ADvoicelistitem *voicelistitem[NUM_VOICES]; 
};
#endif
