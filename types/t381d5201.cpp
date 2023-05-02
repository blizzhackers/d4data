/**
 * Definition: t381d5201
 * Hash: 381d5201
 */

#include "t381d5201.h"

void t381d5201::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&value, base, current);
  current = ptr + 0x4;
  readData(&unk_b5a2c78, base, current);
  current = ptr + 0x8;
  readData(&unk_411da82, base, current);
  ptr += 0x40;
}
