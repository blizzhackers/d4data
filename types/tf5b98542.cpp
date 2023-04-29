/**
 * Definition: tf5b98542
 * Hash: f5b98542
 */

#include "tf5b98542.h"

void tf5b98542::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&flChance, base, ptr);
  readData(&unk_b28752e, base, ptr);
  readData(&unk_6c70b7e, base, ptr);
  readData(&unk_69022, base, ptr);
  readData(&unk_e04d458, base, ptr);
}
