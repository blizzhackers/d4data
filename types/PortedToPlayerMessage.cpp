/**
 * Definition: PortedToPlayerMessage
 * Hash: a07c6923
 */

#include "PortedToPlayerMessage.h"

void PortedToPlayerMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a51c96a, base, current);
  current = ptr + 0x14;
  readData(&unk_2a8dda3, base, current);
  ptr += 0x18;
}
