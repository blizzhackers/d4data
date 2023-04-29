/**
 * Definition: tb915a4ef
 * Hash: b915a4ef
 */

#include "tb915a4ef.h"

void tb915a4ef::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3ee4554, base, ptr);
}
