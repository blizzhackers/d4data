/**
 * Definition: PetDetachMessage
 * Hash: 9246f517
 */

#include "PetDetachMessage.h"

void PetDetachMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPet, base, current);
  current = ptr + 0x18;
  readData(&bDisplayChatMessage, base, current);
  current = ptr + 0x1c;
  readData(&unk_70bf7e7, base, current);
  ptr += 0x20;
}
