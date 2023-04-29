/**
 * Definition: tc58eb80a
 * Hash: c58eb80a
 */

#include "tc58eb80a.h"

void tc58eb80a::read(const char* base, char* &ptr) {
  readData(&snoWorld, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_fdbe9d6, base, ptr);
}
