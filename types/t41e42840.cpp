/**
 * Definition: t41e42840
 * Hash: 41e42840
 */

#include "t41e42840.h"

void t41e42840::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arQuests, base, current);
  ptr += 0x118;
}
