/**
 * Definition: SoundTableDefinition
 * Hash: 560fba
 */

#include "SoundTableDefinition.h"

void SoundTableDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  current = ptr + 0x20;
  readData(&unk_e482608, base, current);
  current = ptr + 0x24;
  readData(&tDefaultEntry, base, current);
  current = ptr + 0x40;
  readData(&ptPostprocessed, base, current);
  ptr += 0x48;
}
