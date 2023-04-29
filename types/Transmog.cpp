/**
 * Definition: Transmog
 * Hash: b754c22b
 */

#include "Transmog.h"

void Transmog::read(const char* base, char* &ptr) {
  readData(&snoItem, base, ptr);
  readData(&snoDye, base, ptr);
}
