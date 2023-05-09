/**
 * Definition: MaterialEnum
 * Hash: bd384884
 */

#include "MaterialEnum.h"

void MaterialEnum::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwValue, base, current);
  current = ptr + 0x8;
  readData(&szEnumName, base, current);
  ptr += 0x18;
}
