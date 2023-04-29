/**
 * Definition: PetMessage
 * Hash: 61796f0e
 */

#include "PetMessage.h"

void PetMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_70bf7e7, base, ptr);
  readData(&nIndex, base, ptr);
  readData(&annPet, base, ptr);
  readData(&gbidPetType, base, ptr);
  readData(&unk_267e8b4, base, ptr);
  readData(&unk_9e938b5, base, ptr);
}
