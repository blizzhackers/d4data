/**
 * Definition: FloatingNumberMessage
 * Hash: e3945842
 */

#include "FloatingNumberMessage.h"

void FloatingNumberMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&flDamage, base, ptr);
  readData(&unk_d5344c0, base, ptr);
  readData(&eType, base, ptr);
  readData(&vImpactPos, base, ptr);
  readData(&unk_741de7, base, ptr);
}
