/**
 * Definition: FloatingNumberMessage
 * Hash: e3945842
 */

#include "FloatingNumberMessage.h"

void FloatingNumberMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annTarget, base, current);
  current = ptr + 0x18;
  readData(&flDamage, base, current);
  current = ptr + 0x1c;
  readData(&unk_d5344c0, base, current);
  current = ptr + 0x20;
  readData(&eType, base, current);
  current = ptr + 0x24;
  readData(&vImpactPos, base, current);
  current = ptr + 0x30;
  readData(&unk_741de7, base, current);
  ptr += 0x38;
}
