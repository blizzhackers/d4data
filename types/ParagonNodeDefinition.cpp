/**
 * Definition: ParagonNodeDefinition
 * Hash: 29664b57
 */

#include "ParagonNodeDefinition.h"

void ParagonNodeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&hIcon, base, current);
  current = ptr + 0xc;
  readData(&hIconMask, base, current);
  current = ptr + 0x10;
  readData(&unk_7714b98, base, current);
  current = ptr + 0x14;
  readData(&unk_3556860, base, current);
  current = ptr + 0x18;
  readData(&snoPassivePower, base, current);
  current = ptr + 0x20;
  readData(&ptAttributes, base, current);
  current = ptr + 0x30;
  readData(&unk_8ba8e1e, base, current);
  current = ptr + 0x40;
  readData(&unk_2055501, base, current);
  current = ptr + 0x50;
  readData(&unk_2133527, base, current);
  current = ptr + 0x54;
  readData(&unk_a5d749f, base, current);
  current = ptr + 0x58;
  readData(&arSkillTags, base, current);
  ptr += 0x68;
}
