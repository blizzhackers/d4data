/**
 * Definition: ta8e85f45
 * Hash: a8e85f45
 */

#include "ta8e85f45.h"

void ta8e85f45::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x4;
  readData(&value, base, current);
  current = ptr + 0x8;
  readData(&unk_2362b28, base, current);
  ptr += 0xc;
}
