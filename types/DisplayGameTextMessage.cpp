/**
 * Definition: DisplayGameTextMessage
 * Hash: 99e0703a
 */

#include "DisplayGameTextMessage.h"

void DisplayGameTextMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szMsg, base, current);
  current = ptr + 0x410;
  readData(&flTimeUntilFade, base, current);
  current = ptr + 0x418;
  readData(&nParam1, base, current);
  current = ptr + 0x420;
  readData(&nParam2, base, current);
  current = ptr + 0x428;
  readData(&unk_8e0c078, base, current);
  ptr += 0x430;
}
