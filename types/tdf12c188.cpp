/**
 * Definition: tdf12c188
 * Hash: df12c188
 */

#include "tdf12c188.h"

void tdf12c188::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&unk_3ddddaa, base, current);
  ptr += 0x20;
}
