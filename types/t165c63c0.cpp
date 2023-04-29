/**
 * Definition: t165c63c0
 * Hash: 165c63c0
 */

#include "t165c63c0.h"

void t165c63c0::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_870804d, base, ptr);
  readData(&szName, base, ptr);
}
