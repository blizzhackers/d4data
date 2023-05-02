/**
 * Definition: PreloadSceneDataMessage
 * Hash: 40933794
 */

#include "PreloadSceneDataMessage.h"

void PreloadSceneDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSScene, base, current);
  current = ptr + 0x18;
  readData(&snoScene, base, current);
  ptr += 0x1c;
}
