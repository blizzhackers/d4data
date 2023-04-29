/**
 * Definition: t50b285a4
 * Hash: 50b285a4
 */

#include "t50b285a4.h"

void t50b285a4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoPower, base, ptr);
}
