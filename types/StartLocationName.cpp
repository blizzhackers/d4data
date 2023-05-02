/**
 * Definition: StartLocationName
 * Hash: 167a36a8
 */

#include "StartLocationName.h"

void StartLocationName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uGUID, base, current);
  current = ptr + 0x4;
  readData(&szName, base, current);
  ptr += 0x44;
}
