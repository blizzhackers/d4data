/**
 * Definition: TransmogSlot
 * Hash: fb1f3d4d
 */

#include "TransmogSlot.h"

void TransmogSlot::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eSlot, base, current);
  current = ptr + 0x4;
  readData(&tTransmog, base, current);
  current = ptr + 0xc;
  readData(&bEnabled, base, current);
  ptr += 0x10;
}
