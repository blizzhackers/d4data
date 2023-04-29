/**
 * Definition: t8c51adb6
 * Hash: 8c51adb6
 */

#include "t8c51adb6.h"

void t8c51adb6::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&snoReward, base, ptr);
  readData(&unk_6752f3b, base, ptr);
  readData(&unk_1cc41e6, base, ptr);
  readData(&unk_7c3761f, base, ptr);
  readData(&unk_c2e08fe, base, ptr);
  readData(&unk_8705b44, base, ptr);
}
