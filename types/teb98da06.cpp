/**
 * Definition: teb98da06
 * Hash: eb98da06
 */

#include "teb98da06.h"

void teb98da06::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x4;
  readData(&flDefaultValue, base, current);
  ptr += 0x8;
}
