/**
 * Definition: tef4e42e5
 * Hash: ef4e42e5
 */

#include "tef4e42e5.h"

void tef4e42e5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_97fcdff, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
