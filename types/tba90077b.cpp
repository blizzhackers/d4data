/**
 * Definition: tba90077b
 * Hash: ba90077b
 */

#include "tba90077b.h"

void tba90077b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tInvLocationData, base, ptr);
  readData(&annItem, base, ptr);
}
