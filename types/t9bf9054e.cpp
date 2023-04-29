/**
 * Definition: t9bf9054e
 * Hash: 9bf9054e
 */

#include "t9bf9054e.h"

void t9bf9054e::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&tMinRequired, base, ptr);
  readData(&unk_3cf7677, base, ptr);
  readData(&unk_26286d0, base, ptr);
}
