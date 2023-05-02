/**
 * Definition: t7e01ffa9
 * Hash: 7e01ffa9
 */

#include "t7e01ffa9.h"

void t7e01ffa9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f13a861, base, current);
  current = ptr + 0x4;
  readData(&unk_d70e05d, base, current);
  current = ptr + 0x8;
  readData(&unk_8a74e60, base, current);
  current = ptr + 0x18;
  readData(&unk_5909501, base, current);
  current = ptr + 0x20;
  readData(&unk_44e3edc, base, current);
  current = ptr + 0x30;
  readData(&unk_5b826ba, base, current);
  ptr += 0x40;
}
