/**
 * Definition: tb7e9ad7e
 * Hash: b7e9ad7e
 */

#include "tb7e9ad7e.h"

void tb7e9ad7e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x14;
  readData(&unk_a0febeb, base, current);
  current = ptr + 0x18;
  readData(&unk_259dc59, base, current);
  current = ptr + 0x1c;
  readData(&unk_90599e6, base, current);
  ptr += 0x20;
}
