/**
 * Definition: HirelingInfoUpdateMessage
 * Hash: bddf15e6
 */

#include "HirelingInfoUpdateMessage.h"

void HirelingInfoUpdateMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eClass, base, ptr);
  readData(&fDead, base, ptr);
  readData(&gbidName, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
