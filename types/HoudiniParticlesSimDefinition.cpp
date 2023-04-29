/**
 * Definition: HoudiniParticlesSimDefinition
 * Hash: 5bc6f209
 */

#include "HoudiniParticlesSimDefinition.h"

void HoudiniParticlesSimDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_ce1c03c, base, ptr);
  readData(&unk_5b87e5, base, ptr);
  readData(&unk_82df211, base, ptr);
  readData(&unk_728cb31, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&unk_e6e1d4e, base, ptr);
  readData(&unk_77234fb, base, ptr);
  readData(&flCompression, base, ptr);
  readData(&unk_ab79e60, base, ptr);
  readData(&unk_e9be652, base, ptr);
}
