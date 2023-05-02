/**
 * Definition: ACDTranslateFacingMessage
 * Hash: afd13fe3
 */

#include "ACDTranslateFacingMessage.h"

void ACDTranslateFacingMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&aDesiredYaw, base, current);
  current = ptr + 0x1c;
  readData(&bSnapFacing, base, current);
  ptr += 0x20;
}
