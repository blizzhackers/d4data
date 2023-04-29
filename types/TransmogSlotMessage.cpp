/**
 * Definition: TransmogSlotMessage
 * Hash: 3d04ae12
 */

#include "TransmogSlotMessage.h"

void TransmogSlotMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&unk_9c2495b, base, ptr);
  readData(&snoDye, base, ptr);
}
