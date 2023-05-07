/**
 * Definition: MaterialEnumValue
 * Hash: edd98201
 */

#include "MaterialEnumValue.h"

void MaterialEnumValue::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&value, base, current);
  ptr += 0x4;
}
