/**
 * Definition: tdca4dec2
 * Hash: dca4dec2
 */

#include "tdca4dec2.h"

void tdca4dec2::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&unk_465327d, base, ptr);
}
