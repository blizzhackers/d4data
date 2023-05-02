/**
 * Definition: td0a8fb7f
 * Hash: d0a8fb7f
 */

#include "td0a8fb7f.h"

void td0a8fb7f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nPlayers, base, current);
  current = ptr + 0x14;
  readData(&unk_52e2a15, base, current);
  ptr += 0x24;
}
