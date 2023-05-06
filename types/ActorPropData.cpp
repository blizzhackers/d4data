/**
 * Definition: ActorPropData
 * Hash: 4a3fc7b4
 */

#include "ActorPropData.h"

void ActorPropData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fIsCorpse, base, current);
  current = ptr + 0x4;
  readData(&unk_fd4d7b0, base, current);
  current = ptr + 0x8;
  readData(&eCrafterType, base, current);
  current = ptr + 0xc;
  readData(&unk_fdbd32c, base, current);
  current = ptr + 0x10;
  readData(&unk_49ab5de, base, current);
  ptr += 0x14;
}
