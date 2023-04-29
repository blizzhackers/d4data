/**
 * Definition: t9dfe7035
 * Hash: 9dfe7035
 */

#include "t9dfe7035.h"

void t9dfe7035::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_1e3c3c3, base, ptr);
  readData(&unk_19dfce6, base, ptr);
  readData(&unk_18f0908, base, ptr);
  readData(&unk_ec8f2d4, base, ptr);
  readData(&unk_b0425e7, base, ptr);
}
