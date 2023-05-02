/**
 * Definition: tf58f01c3
 * Hash: f58f01c3
 */

#include "tf58f01c3.h"

void tf58f01c3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x4;
  readData(&vDefaultValue, base, current);
  ptr += 0x14;
}
