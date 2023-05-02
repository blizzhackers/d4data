/**
 * Definition: PrefetchSceneMessage
 * Hash: 5d7092c4
 */

#include "PrefetchSceneMessage.h"

void PrefetchSceneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoScene, base, current);
  ptr += 0x14;
}
