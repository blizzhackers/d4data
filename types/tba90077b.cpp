/**
 * Definition: tba90077b
 * Hash: ba90077b
 */

#include "tba90077b.h"

void tba90077b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&tInvLocationData, base, current);
  current = ptr + 0x2c;
  readData(&annItem, base, current);
  ptr += 0x34;
}
