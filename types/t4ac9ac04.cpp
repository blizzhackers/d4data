/**
 * Definition: t4ac9ac04
 * Hash: 4ac9ac04
 */

#include "t4ac9ac04.h"

void t4ac9ac04::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  current = ptr + 0x20;
  readData(&unk_526a589, base, current);
  ptr += 0x28;
}
