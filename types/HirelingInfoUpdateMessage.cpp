/**
 * Definition: HirelingInfoUpdateMessage
 * Hash: bddf15e6
 */

#include "HirelingInfoUpdateMessage.h"

void HirelingInfoUpdateMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eClass, base, current);
  current = ptr + 0x14;
  readData(&fDead, base, current);
  current = ptr + 0x18;
  readData(&gbidName, base, current);
  current = ptr + 0x1c;
  readData(&unk_dce541c, base, current);
  ptr += 0x20;
}
