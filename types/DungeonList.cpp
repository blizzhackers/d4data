/**
 * Definition: DungeonList
 * Hash: cb02466c
 */

#include "DungeonList.h"

void DungeonList::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arDungeons, base, current);
  ptr += 0x10;
}
