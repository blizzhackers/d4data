/**
 * Definition: t5960905c
 * Hash: 5960905c
 */

#include "t5960905c.h"

void t5960905c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3cdcdff, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  current = ptr + 0x8;
  readData(&unk_4b95c37, base, current);
  current = ptr + 0xc;
  readData(&unk_be4fdf8, base, current);
  current = ptr + 0x10;
  readData(&unk_74b9406, base, current);
  current = ptr + 0x14;
  readData(&flFadeInTime, base, current);
  ptr += 0x18;
}
