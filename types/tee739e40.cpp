/**
 * Definition: tee739e40
 * Hash: ee739e40
 */

#include "tee739e40.h"

void tee739e40::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b15b511, base, current);
  current = ptr + 0x4;
  readData(&unk_cd99c1a, base, current);
  ptr += 0x8;
}
