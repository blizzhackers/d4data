/**
 * Definition: t11e7e638
 * Hash: 11e7e638
 */

#include "t11e7e638.h"

void t11e7e638::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&nScore, base, ptr);
  readData(&unk_8105d80, base, ptr);
  readData(&unk_bb98fd8, base, ptr);
}
