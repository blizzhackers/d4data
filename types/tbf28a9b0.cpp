/**
 * Definition: tbf28a9b0
 * Hash: bf28a9b0
 */

#include "tbf28a9b0.h"

void tbf28a9b0::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&flStart, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&unk_e5c87c4, base, ptr);
}
