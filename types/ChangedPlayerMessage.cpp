/**
 * Definition: ChangedPlayerMessage
 * Hash: 3bc9d4bc
 */

#include "ChangedPlayerMessage.h"

void ChangedPlayerMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&usHeroName, base, current);
  current = ptr + 0x48;
  readData(&eClass, base, current);
  ptr += 0x4c;
}
