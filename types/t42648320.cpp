/**
 * Definition: t42648320
 * Hash: 42648320
 */

#include "t42648320.h"

void t42648320::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversation, base, current);
  current = ptr + 0x8;
  readData(&uExpirationTime, base, current);
  ptr += 0x10;
}
