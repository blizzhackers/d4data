/**
 * Definition: t3428ad87
 * Hash: 3428ad87
 */

#include "t3428ad87.h"

void t3428ad87::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szLocationName, base, current);
  current = ptr + 0x50;
  readData(&snoWorld, base, current);
  current = ptr + 0x54;
  readData(&snoActor, base, current);
  current = ptr + 0x58;
  readData(&nActorCount, base, current);
  ptr += 0x5c;
}
