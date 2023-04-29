/**
 * Definition: DisplayGameTextMessage
 * Hash: 99e0703a
 */

#include "DisplayGameTextMessage.h"

void DisplayGameTextMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szMsg, base, ptr);
  readData(&flTimeUntilFade, base, ptr);
  readData(&nParam1, base, ptr);
  readData(&nParam2, base, ptr);
  readData(&unk_8e0c078, base, ptr);
}
