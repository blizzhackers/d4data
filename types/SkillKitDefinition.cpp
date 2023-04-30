/**
 * Definition: SkillKitDefinition
 * Hash: fcfaaf30
 */

#include "SkillKitDefinition.h"

void SkillKitDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&arActiveSkillEntries, base, ptr);
  readData(&unk_a6a18af, base, ptr);
  readData(&arNodes, base, ptr);
  readData(&arConnections, base, ptr);
  readData(&dwNextID, base, ptr);
  readData(&vViewboxMinMaybe, base, ptr);
  readData(&vViewboxMaxMaybe, base, ptr);
  readData(&unk_11ce0b6, base, ptr);
  readData(&unk_99647ce, base, ptr);
}
