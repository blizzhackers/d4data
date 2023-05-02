/**
 * Definition: t980cffef
 * Hash: 980cffef
 */

#include "t980cffef.h"

void t980cffef::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a488aa6, base, current);
  ptr += 0x18;
}
