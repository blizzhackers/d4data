/**
 * Definition: ACDTranslateFacingMessage
 * Hash: afd13fe3
 */

#include "ACDTranslateFacingMessage.h"

void ACDTranslateFacingMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&aDesiredYaw, base, ptr);
  readData(&bSnapFacing, base, ptr);
}
