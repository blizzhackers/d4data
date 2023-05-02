/**
 * Definition: PetMessage
 * Hash: 61796f0e
 */

#include "PetMessage.h"

void PetMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_70bf7e7, base, current);
  current = ptr + 0x14;
  readData(&nIndex, base, current);
  current = ptr + 0x18;
  readData(&annPet, base, current);
  current = ptr + 0x20;
  readData(&gbidPetType, base, current);
  current = ptr + 0x24;
  readData(&unk_267e8b4, base, current);
  current = ptr + 0x30;
  readData(&unk_9e938b5, base, current);
  ptr += 0x40;
}
