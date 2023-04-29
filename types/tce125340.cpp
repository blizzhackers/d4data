/**
 * Definition: tce125340
 * Hash: ce125340
 */

#include "tce125340.h"

void tce125340::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szName, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_d6d0056, base, ptr);
}
