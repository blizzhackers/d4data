/**
 * Definition: ACDWorldPositionMessage
 * Hash: d936d5ea
 */

#include "ACDWorldPositionMessage.h"

void ACDWorldPositionMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tWorldLocationData, base, ptr);
  readData(&tLookOverrides, base, ptr);
  readData(&unk_cfced5c, base, ptr);
}
