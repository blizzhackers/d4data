/**
 * Definition: ACDTranslateSyncMessage
 * Hash: 32ecc1d8
 */

#include "ACDTranslateSyncMessage.h"

void ACDTranslateSyncMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&vDestX, base, current);
  current = ptr + 0x20;
  readData(&vDestY, base, current);
  current = ptr + 0x28;
  readData(&vDestZ, base, current);
  current = ptr + 0x30;
  readData(&bSnap, base, current);
  current = ptr + 0x38;
  readData(&uAckValue, base, current);
  ptr += 0x40;
}
