/**
 * Definition: BuffExclusiveType
 * Hash: c42da49d
 */

#include "BuffExclusiveType.h"

void BuffExclusiveType::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
}
