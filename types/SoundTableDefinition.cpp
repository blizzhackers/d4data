/**
 * Definition: SoundTableDefinition
 * Hash: 560fba
 */

#include "SoundTableDefinition.h"

void SoundTableDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eType, base, ptr);
  readData(&tEntries, base, ptr);
  readData(&unk_e482608, base, ptr);
  readData(&unk_c0281ab, base, ptr);
  readData(&ptPostprocessed, base, ptr);
}
