/**
 * Definition: TransmogSlot
 * Hash: fb1f3d4d
 */

#include "TransmogSlot.h"

void TransmogSlot::read(const char* base, char* &ptr) {
  readData(&eSlot, base, ptr);
  readData(&tTransmog, base, ptr);
  readData(&bEnabled, base, ptr);
}
