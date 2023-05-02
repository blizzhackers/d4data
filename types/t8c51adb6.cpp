/**
 * Definition: t8c51adb6
 * Hash: 8c51adb6
 */

#include "t8c51adb6.h"

void t8c51adb6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&dwFlags, base, current);
  current = ptr + 0x8;
  readData(&snoReward, base, current);
  current = ptr + 0x10;
  readData(&unk_6752f3b, base, current);
  current = ptr + 0x20;
  readData(&unk_1cc41e6, base, current);
  current = ptr + 0x30;
  readData(&unk_7c3761f, base, current);
  current = ptr + 0x40;
  readData(&unk_c2e08fe, base, current);
  current = ptr + 0x44;
  readData(&unk_8705b44, base, current);
  ptr += 0x48;
}
