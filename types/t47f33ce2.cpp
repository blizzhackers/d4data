/**
 * Definition: t47f33ce2
 * Hash: 47f33ce2
 */

#include "t47f33ce2.h"

void t47f33ce2::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arRanks, base, ptr);
}
