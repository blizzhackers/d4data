/**
 * Definition: PowerMod
 * Hash: 520c452d
 */

#include "PowerMod.h"

void PowerMod::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&unk_2e74691, base, ptr);
  readData(&dwModId, base, ptr);
  readData(&unk_4a47447, base, ptr);
  readData(&unk_94cc84e, base, ptr);
  readData(&unk_939ad1e, base, ptr);
  readData(&unk_7b47c37, base, ptr);
  readData(&arSkillTags, base, ptr);
}
