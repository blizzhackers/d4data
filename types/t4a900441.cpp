/**
 * Definition: t4a900441
 * Hash: 4a900441
 */

#include "t4a900441.h"

void t4a900441::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f4522ab, base, current);
  current = ptr + 0x4;
  readData(&unk_d494c2d, base, current);
  current = ptr + 0x8;
  readData(&flAmplitudeRatio, base, current);
  current = ptr + 0xc;
  readData(&unk_12070ce, base, current);
  ptr += 0x10;
}
