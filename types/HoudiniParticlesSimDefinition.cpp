/**
 * Definition: HoudiniParticlesSimDefinition
 * Hash: 5bc6f209
 */

#include "HoudiniParticlesSimDefinition.h"

void HoudiniParticlesSimDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_ce1c03c, base, current);
  current = ptr + 0xc;
  readData(&unk_5b87e5, base, current);
  current = ptr + 0x10;
  readData(&unk_82df211, base, current);
  current = ptr + 0x14;
  readData(&unk_728cb31, base, current);
  current = ptr + 0x18;
  readData(&flRadius, base, current);
  current = ptr + 0x1c;
  readData(&unk_e6e1d4e, base, current);
  current = ptr + 0x20;
  readData(&unk_77234fb, base, current);
  current = ptr + 0x24;
  readData(&flCompression, base, current);
  current = ptr + 0x28;
  readData(&unk_ab79e60, base, current);
  current = ptr + 0x38;
  readData(&unk_e9be652, base, current);
  ptr += 0x48;
}
