/**
 * Definition: ClothDefinition
 * Hash: 45f8e523
 */

#include "ClothDefinition.h"

void ClothDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoAmbientSound, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&unk_2a6986f, base, current);
  current = ptr + 0x14;
  readData(&unk_be5c463, base, current);
  current = ptr + 0xcc;
  readData(&unk_570fcff, base, current);
  current = ptr + 0xd0;
  readData(&unk_b8886b, base, current);
  current = ptr + 0xd4;
  readData(&unk_a3b3e2, base, current);
  current = ptr + 0xd8;
  readData(&unk_c5496ae, base, current);
  current = ptr + 0xdc;
  readData(&unk_fc18a85, base, current);
  current = ptr + 0xe0;
  readData(&unk_643f5b, base, current);
  current = ptr + 0xe4;
  readData(&unk_5f96b22, base, current);
  current = ptr + 0xec;
  readData(&unk_4848e0f, base, current);
  ptr += 0xf4;
}
