/**
 * Definition: td9c7cc4
 * Hash: d9c7cc4
 */

#include "td9c7cc4.h"

void td9c7cc4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_1fe6e13, base, ptr);
  readData(&unk_3dd9525, base, ptr);
  readData(&unk_ed3262c, base, ptr);
  readData(&snoAspect, base, ptr);
}
