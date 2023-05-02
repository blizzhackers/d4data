/**
 * Definition: t8166b77f
 * Hash: 8166b77f
 */

#include "t8166b77f.h"

void t8166b77f::read(const char* base, char* &ptr) {
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
  readData(&tInterval, base, current);
  current = ptr + 0x50;
  readData(&unk_b7bb063, base, current);
  current = ptr + 0x70;
  readData(&unk_dac1f5d, base, current);
  ptr += 0x78;
}
