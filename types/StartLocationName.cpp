/**
 * Definition: StartLocationName
 * Hash: 167a36a8
 */

#include "StartLocationName.h"

void StartLocationName::read(const char* base, char* &ptr) {
  readData(&uGUID, base, ptr);
  readData(&szName, base, ptr);
}
