/**
 * Definition: UpdateConvAutoAdvanceMessage
 * Hash: c994f589
 */

#include "UpdateConvAutoAdvanceMessage.h"

void UpdateConvAutoAdvanceMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoConv, base, current);
  current = ptr + 0x14;
  readData(&nLineUID, base, current);
  current = ptr + 0x18;
  readData(&dwNextAdvanceTime, base, current);
  ptr += 0x1c;
}
