/**
 * Definition: PetDetachMessage
 * Hash: 9246f517
 */

#include "PetDetachMessage.h"

void PetDetachMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPet, base, ptr);
  readData(&bDisplayChatMessage, base, ptr);
  readData(&unk_70bf7e7, base, ptr);
}
