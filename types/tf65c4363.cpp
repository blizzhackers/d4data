/**
 * Definition: tf65c4363
 * Hash: f65c4363
 */

#include "tf65c4363.h"

void tf65c4363::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoScript, base, ptr);
  readData(&unk_7316dbf, base, ptr);
  readData(&arActorGroups, base, ptr);
  readData(&unk_b5b0f9a, base, ptr);
  readData(&unk_9af876f, base, ptr);
  readData(&bIsChild, base, ptr);
}
