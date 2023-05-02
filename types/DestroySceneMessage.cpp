/**
 * Definition: DestroySceneMessage
 * Hash: bbe4e09d
 */

#include "DestroySceneMessage.h"

void DestroySceneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSScene, base, current);
  ptr += 0x18;
}
