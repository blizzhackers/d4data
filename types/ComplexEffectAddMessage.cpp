/**
 * Definition: ComplexEffectAddMessage
 * Hash: e0a77a33
 */

#include "ComplexEffectAddMessage.h"

void ComplexEffectAddMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSComplexEffect, base, ptr);
  readData(&eType, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&annSource, base, ptr);
  readData(&annDest, base, ptr);
  readData(&unk_b883005, base, ptr);
  readData(&dwParam1, base, ptr);
  readData(&dwParam2, base, ptr);
  readData(&bIgnoreOwnerAlpha, base, ptr);
}
