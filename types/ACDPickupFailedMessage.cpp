/**
 * Definition: ACDPickupFailedMessage
 * Hash: ebd5b69e
 */

#include "ACDPickupFailedMessage.h"

void ACDPickupFailedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&unk_c9b5ba6, base, ptr);
  readData(&ePickupResponse, base, ptr);
  readData(&annPickee, base, ptr);
}
