/**
 * Definition: DungeonStatesEntry
 * Hash: d214b596
 */

#include "DungeonStatesEntry.h"

void DungeonStatesEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
