/**
 * Definition: TransmogSlotData
 * Hash: c80e1187
 */

#include "TransmogSlotData.h"

void TransmogSlotData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eSlot, base, current);
  current = ptr + 0x4;
  readData(&unk_9c2495b, base, current);
  current = ptr + 0x8;
  readData(&snoDye, base, current);
  current = ptr + 0xc;
  readData(&bRemove, base, current);
  ptr += 0x10;
}
