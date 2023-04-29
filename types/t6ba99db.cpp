/**
 * Definition: t6ba99db
 * Hash: 6ba99db
 */

#include "t6ba99db.h"

void t6ba99db::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
