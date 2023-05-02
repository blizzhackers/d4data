/**
 * Definition: te7307a37
 * Hash: e7307a37
 */

#include "te7307a37.h"

void te7307a37::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_89a9405, base, current);
  current = ptr + 0x4;
  readData(&unk_8753a3e, base, current);
  current = ptr + 0x10;
  readData(&tFormula, base, current);
  ptr += 0x30;
}
