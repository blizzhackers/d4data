/**
 * Definition: ComplexEffectAddMessage
 * Hash: e0a77a33
 */

#include "ComplexEffectAddMessage.h"

void ComplexEffectAddMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSComplexEffect, base, current);
  current = ptr + 0x14;
  readData(&eType, base, current);
  current = ptr + 0x18;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x1c;
  readData(&annSource, base, current);
  current = ptr + 0x24;
  readData(&annDest, base, current);
  current = ptr + 0x2c;
  readData(&unk_b883005, base, current);
  current = ptr + 0x34;
  readData(&dwParam1, base, current);
  current = ptr + 0x38;
  readData(&dwParam2, base, current);
  current = ptr + 0x3c;
  readData(&bIgnoreOwnerAlpha, base, current);
  ptr += 0x40;
}
