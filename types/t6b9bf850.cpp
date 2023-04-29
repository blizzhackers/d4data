/**
 * Definition: t6b9bf850
 * Hash: 6b9bf850
 */

#include "t6b9bf850.h"

void t6b9bf850::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nType, base, ptr);
  readData(&arParams, base, ptr);
}
