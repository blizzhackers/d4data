/**
 * Definition: ParagonNodeDefinition
 * Hash: 29664b57
 */

#include "ParagonNodeDefinition.h"

void ParagonNodeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&hIcon, base, ptr);
  readData(&unk_f8257d, base, ptr);
  readData(&unk_7714b98, base, ptr);
  readData(&unk_3556860, base, ptr);
  readData(&snoPassivePower, base, ptr);
  readData(&ptAttributes, base, ptr);
  readData(&unk_8ba8e1e, base, ptr);
  readData(&unk_2055501, base, ptr);
  readData(&unk_2133527, base, ptr);
  readData(&unk_a5d749f, base, ptr);
  readData(&arSkillTags, base, ptr);
}
