/**
 * Definition: ACDWorldPositionMessage
 * Hash: d936d5ea
 */

#include "ACDWorldPositionMessage.h"

void ACDWorldPositionMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tWorldLocationData, base, current);
  current = ptr + 0x48;
  readData(&tLookOverrides, base, current);
  current = ptr + 0x7c;
  readData(&unk_cfced5c, base, current);
  ptr += 0x98;
}
