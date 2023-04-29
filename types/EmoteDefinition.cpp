/**
 * Definition: EmoteDefinition
 * Hash: 37b1da83
 */

#include "EmoteDefinition.h"

void EmoteDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoPower, base, ptr);
  readData(&hImageNormal, base, ptr);
  readData(&unk_c380a6f, base, ptr);
  readData(&unk_bd1ee3, base, ptr);
}
