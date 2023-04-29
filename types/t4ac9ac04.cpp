/**
 * Definition: t4ac9ac04
 * Hash: 4ac9ac04
 */

#include "t4ac9ac04.h"

void t4ac9ac04::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_526a589, base, ptr);
}
