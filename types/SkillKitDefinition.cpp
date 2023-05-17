/**
 * Definition: SkillKitDefinition
 * Hash: fcfaaf30
 */

#include "SkillKitDefinition.h"

void SkillKitDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arActiveSkillEntries, base, current);
  current = ptr + 0x18;
  readData(&unk_a6a18af, base, current);
  current = ptr + 0x28;
  readData(&arNodes, base, current);
  current = ptr + 0x38;
  readData(&arConnections, base, current);
  current = ptr + 0x48;
  readData(&dwNextID, base, current);
  current = ptr + 0x4c;
  readData(&vNodeMinPositions, base, current);
  current = ptr + 0x54;
  readData(&vNodeMaxPositions, base, current);
  current = ptr + 0x5c;
  readData(&unk_11ce0b6, base, current);
  current = ptr + 0x64;
  readData(&unk_99647ce, base, current);
  ptr += 0x70;
}
