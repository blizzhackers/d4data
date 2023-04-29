/**
 * Definition: t14195114
 * Hash: 14195114
 */

#include "t14195114.h"

void t14195114::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&hImage, base, ptr);
  readData(&snoMovie, base, ptr);
}
