/**
 * Definition: tb7b10239
 * Hash: b7b10239
 */

#include "tb7b10239.h"

void tb7b10239::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_a488aa6, base, ptr);
  readData(&unk_3ec603d, base, ptr);
}
