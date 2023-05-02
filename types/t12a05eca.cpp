/**
 * Definition: t12a05eca
 * Hash: 12a05eca
 */

#include "t12a05eca.h"

void t12a05eca::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_828d6cf, base, current);
  current = ptr + 0x14;
  readData(&unk_a7dff70, base, current);
  current = ptr + 0x18;
  readData(&unk_821e462, base, current);
  current = ptr + 0x50;
  readData(&unk_821e463, base, current);
  current = ptr + 0x88;
  readData(&dwAnimFlags, base, current);
  ptr += 0x90;
}
