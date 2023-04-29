/**
 * Definition: tac560e08
 * Hash: ac560e08
 */

#include "tac560e08.h"

void tac560e08::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_8a6cb1e, base, ptr);
}
