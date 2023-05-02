/**
 * Definition: EmoteDefinition
 * Hash: 37b1da83
 */

#include "EmoteDefinition.h"

void EmoteDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoPower, base, current);
  current = ptr + 0xc;
  readData(&hImageNormal, base, current);
  current = ptr + 0x10;
  readData(&unk_c380a6f, base, current);
  current = ptr + 0x14;
  readData(&unk_bd1ee3, base, current);
  ptr += 0x18;
}
