/**
 * Definition: tc80e1187
 * Hash: c80e1187
 */

#include "tc80e1187.h"

void tc80e1187::read(const char* base, char* &ptr) {
  readData(&eSlot, base, ptr);
  readData(&unk_9c2495b, base, ptr);
  readData(&snoDye, base, ptr);
  readData(&bRemove, base, ptr);
}
