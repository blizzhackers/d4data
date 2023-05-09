/**
 * Definition: TransmogEnableMessage
 * Hash: 965d4e57
 */

#include "TransmogEnableMessage.h"

void TransmogEnableMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSlot, base, current);
  current = ptr + 0x14;
  readData(&bEnable, base, current);
  ptr += 0x18;
}
