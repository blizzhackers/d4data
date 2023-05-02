/**
 * Definition: t41b30aaa
 * Hash: 41b30aaa
 */

#include "t41b30aaa.h"

void t41b30aaa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
