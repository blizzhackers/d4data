/**
 * Definition: t4a573bb2
 * Hash: 4a573bb2
 */

#include "t4a573bb2.h"

void t4a573bb2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&unk_99e97f7, base, current);
  ptr += 0x38;
}
