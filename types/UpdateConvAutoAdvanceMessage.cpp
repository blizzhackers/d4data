/**
 * Definition: UpdateConvAutoAdvanceMessage
 * Hash: c994f589
 */

#include "UpdateConvAutoAdvanceMessage.h"

void UpdateConvAutoAdvanceMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoConv, base, ptr);
  readData(&nLineUID, base, ptr);
  readData(&dwNextAdvanceTime, base, ptr);
}
