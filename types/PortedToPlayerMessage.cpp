/**
 * Definition: PortedToPlayerMessage
 * Hash: a07c6923
 */

#include "PortedToPlayerMessage.h"

void PortedToPlayerMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_a51c96a, base, ptr);
  readData(&unk_2a8dda3, base, ptr);
}
