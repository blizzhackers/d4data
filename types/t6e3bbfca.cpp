/**
 * Definition: t6e3bbfca
 * Hash: 6e3bbfca
 */

#include "t6e3bbfca.h"

void t6e3bbfca::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&vecPos, base, ptr);
  readData(&unk_c819eef, base, ptr);
  readData(&unk_3614bd3, base, ptr);
}
