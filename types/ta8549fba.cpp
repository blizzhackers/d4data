/**
 * Definition: ta8549fba
 * Hash: a8549fba
 */

#include "ta8549fba.h"

void ta8549fba::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x8;
  readData(&unk_c5b5acd, base, current);
  ptr += 0x10;
}
