/**
 * Definition: LocalPlayerNetEvent
 * Hash: 844125c1
 */

#include "LocalPlayerNetEvent.h"

void LocalPlayerNetEvent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uSig, base, current);
  current = ptr + 0x4;
  readData(&eEvent, base, current);
  current = ptr + 0x8;
  readData(&uAccountId, base, current);
  current = ptr + 0xc;
  readData(&uGameAccountId, base, current);
  ptr += 0x10;
}
