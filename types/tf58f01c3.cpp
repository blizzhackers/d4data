/**
 * Definition: tf58f01c3
 * Hash: f58f01c3
 */

#include "tf58f01c3.h"

void tf58f01c3::read(const char* base, char* &ptr) {
  readData(&snoMaterialValue, base, ptr);
  readData(&vDefaultValue, base, ptr);
}
