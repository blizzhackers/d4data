/**
 * Definition: t42648320
 * Hash: 42648320
 */

#include "t42648320.h"

void t42648320::read(const char* base, char* &ptr) {
  readData(&snoConversation, base, ptr);
  readData(&uExpirationTime, base, ptr);
}
