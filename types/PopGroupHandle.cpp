/**
 * Definition: PopGroupHandle
 * Hash: fabd7fa8
 */

#include "PopGroupHandle.h"

void PopGroupHandle::read(const char* base, char* &ptr) {
  readData(&snoPopulation, base, ptr);
  readData(&gbidType, base, ptr);
  readData(&nID, base, ptr);
}
