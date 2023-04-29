/**
 * Definition: tbf2db627
 * Hash: bf2db627
 */

#include "tbf2db627.h"

void tbf2db627::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_99e9721, base, ptr);
}
