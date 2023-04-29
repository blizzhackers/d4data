/**
 * Definition: ClothDefinition
 * Hash: 45f8e523
 */

#include "ClothDefinition.h"

void ClothDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoAmbientSound, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_2a6986f, base, ptr);
  readData(&unk_be5c463, base, ptr);
  readData(&unk_570fcff, base, ptr);
  readData(&unk_b8886b, base, ptr);
  readData(&unk_a3b3e2, base, ptr);
  readData(&unk_c5496ae, base, ptr);
  readData(&unk_fc18a85, base, ptr);
  readData(&unk_643f5b, base, ptr);
  readData(&unk_5f96b22, base, ptr);
  readData(&unk_4848e0f, base, ptr);
}
