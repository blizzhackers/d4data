/**
 * Definition: ACDPickupFailedMessage
 * Hash: ebd5b69e
 */

#include "ACDPickupFailedMessage.h"

void ACDPickupFailedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x14;
  readData(&unk_c9b5ba6, base, current);
  current = ptr + 0x18;
  readData(&ePickupResponse, base, current);
  current = ptr + 0x1c;
  readData(&annPickee, base, current);
  ptr += 0x24;
}
