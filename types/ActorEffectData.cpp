/**
 * Definition: ActorEffectData
 * Hash: e3835e40
 */

#include "ActorEffectData.h"

void ActorEffectData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a8ed4c, base, current);
  current = ptr + 0x4;
  readData(&unk_ddbb22c, base, current);
  current = ptr + 0x8;
  readData(&unk_5955ed3, base, current);
  current = ptr + 0xc;
  readData(&unk_2bf030e, base, current);
  current = ptr + 0x24;
  readData(&unk_e36d5f3, base, current);
  current = ptr + 0x3c;
  readData(&unk_9cf41a7, base, current);
  current = ptr + 0x54;
  readData(&unk_4ed2a5b, base, current);
  current = ptr + 0x6c;
  readData(&unk_483a88d, base, current);
  current = ptr + 0x70;
  readData(&unk_8d8c7ee, base, current);
  ptr += 0x74;
}
