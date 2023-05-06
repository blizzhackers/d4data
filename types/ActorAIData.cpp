/**
 * Definition: ActorAIData
 * Hash: 89ecf89d
 */

#include "ActorAIData.h"

void ActorAIData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e5e7bd4, base, current);
  current = ptr + 0x10;
  readData(&gbidAIPropType, base, current);
  current = ptr + 0x14;
  readData(&unk_af0baa5, base, current);
  current = ptr + 0x18;
  readData(&unk_766f08, base, current);
  ptr += 0x28;
}
