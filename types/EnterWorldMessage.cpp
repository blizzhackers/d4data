/**
 * Definition: EnterWorldMessage
 * Hash: 54a8b5eb
 */

#include "EnterWorldMessage.h"

void EnterWorldMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&bSPlayers, base, ptr);
}
