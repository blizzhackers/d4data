/**
 * Definition: InvLoc
 * Hash: b251240b
 */

#include "InvLoc.h"

void InvLoc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&annOwner, base, current);
  current = ptr + 0x8;
  readData(&eSlot, base, current);
  current = ptr + 0xc;
  readData(&nSlotX, base, current);
  current = ptr + 0x10;
  readData(&nSlotY, base, current);
  ptr += 0x14;
}
