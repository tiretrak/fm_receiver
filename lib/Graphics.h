#include <Arduino.h>
#include "config.h"

class Graphics {
 private:
  int old_strength;
  int old_strength_idx = 0;
  bool old_stereo;
  int old_volume;
  String old_freqText;
  String old_station;
  String old_radiotext;
  void resetOldValues();
  int signalCurrent = 0;
  int strengthAbsSave = 0;
  int visualCurrent1 = 0;
  int visualSave1 = 0;
  bool currentBL;  
  void drawBLMenu(bool item);

 public:
  int menu = 1;
  bool bass = false;
  int band = DEFAULT_BAND_INDEX;
  void init();
  void displayBasics();
  void drawMenuItem(String item);
  void drawMenu();
  void showTuningBox();
  void hideTuningBox();
  void toggleBL();
  void showSplash();
  void switchBass();
  void Graphics::drawBandSelect(int currentBand);
  void updateState(int strength, bool stereo, int volume, String freqText,
                   String station);
};
