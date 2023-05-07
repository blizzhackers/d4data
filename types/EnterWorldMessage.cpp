/**
 * Definition: EnterWorldMessage
 * Hash: 54a8b5eb
 */

#include "EnterWorldMessage.h"

void EnterWorldMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&unk_23ac715, base, current);
  ptr += 0xe0;
}
