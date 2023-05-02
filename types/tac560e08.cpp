/**
 * Definition: tac560e08
 * Hash: ac560e08
 */

#include "tac560e08.h"

void tac560e08::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_8a6cb1e, base, current);
  ptr += 0x18;
}
