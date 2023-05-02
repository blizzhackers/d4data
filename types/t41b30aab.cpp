/**
 * Definition: t41b30aab
 * Hash: 41b30aab
 */

#include "t41b30aab.h"

void t41b30aab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
