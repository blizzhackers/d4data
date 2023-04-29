/**
 * Definition: t4eae6707
 * Hash: 4eae6707
 */

#include "t4eae6707.h"

void t4eae6707::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
}
