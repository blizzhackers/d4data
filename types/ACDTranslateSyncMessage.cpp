/**
 * Definition: ACDTranslateSyncMessage
 * Hash: 32ecc1d8
 */

#include "ACDTranslateSyncMessage.h"

void ACDTranslateSyncMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&vDestX, base, ptr);
  readData(&vDestY, base, ptr);
  readData(&vDestZ, base, ptr);
  readData(&bSnap, base, ptr);
  readData(&uAckValue, base, ptr);
}
