/**
 * Definition: t381d5201
 * Hash: 381d5201
 */

#include "t381d5201.h"

void t381d5201::read(const char* base, char* &ptr) {
  readData(&value, base, ptr);
  readData(&unk_b5a2c78, base, ptr);
  readData(&unk_411da82, base, ptr);
}
