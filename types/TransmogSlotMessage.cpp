/**
 * Definition: TransmogSlotMessage
 * Hash: 3d04ae12
 */

#include "TransmogSlotMessage.h"

void TransmogSlotMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSlot, base, current);
  current = ptr + 0x14;
  readData(&unk_9c2495b, base, current);
  current = ptr + 0x18;
  readData(&snoDye, base, current);
  ptr += 0x1c;
}
