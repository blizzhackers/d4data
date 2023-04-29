/**
 * Definition: t3428ad87
 * Hash: 3428ad87
 */

#include "t3428ad87.h"

void t3428ad87::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szLocationName, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&nActorCount, base, ptr);
}
