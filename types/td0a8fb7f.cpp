/**
 * Definition: td0a8fb7f
 * Hash: d0a8fb7f
 */

#include "td0a8fb7f.h"

void td0a8fb7f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nPlayers, base, ptr);
  readData(&unk_52e2a15, base, ptr);
}
