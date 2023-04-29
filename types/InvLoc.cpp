/**
 * Definition: InvLoc
 * Hash: b251240b
 */

#include "InvLoc.h"

void InvLoc::read(const char* base, char* &ptr) {
  readData(&annOwner, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&nSlotX, base, ptr);
  readData(&nSlotY, base, ptr);
}
