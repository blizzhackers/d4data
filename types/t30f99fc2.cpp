/**
 * Definition: t30f99fc2
 * Hash: 30f99fc2
 */

#include "t30f99fc2.h"

void t30f99fc2::read(const char* base, char* &ptr) {
  readData(&snoPrefix, base, ptr);
  readData(&snoSuffix, base, ptr);
}
