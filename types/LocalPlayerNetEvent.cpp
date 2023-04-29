/**
 * Definition: LocalPlayerNetEvent
 * Hash: 844125c1
 */

#include "LocalPlayerNetEvent.h"

void LocalPlayerNetEvent::read(const char* base, char* &ptr) {
  readData(&uSig, base, ptr);
  readData(&eEvent, base, ptr);
  readData(&uAccountId, base, ptr);
  readData(&uGameAccountId, base, ptr);
}
