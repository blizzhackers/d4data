/**
 * Definition: tf285a4a4
 * Hash: f285a4a4
 */

#include "tf285a4a4.h"

void tf285a4a4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arHeroes, base, ptr);
  readData(&unk_8189b39, base, ptr);
  readData(&arNPCs, base, ptr);
}
