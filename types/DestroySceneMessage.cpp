/**
 * Definition: DestroySceneMessage
 * Hash: bbe4e09d
 */

#include "DestroySceneMessage.h"

void DestroySceneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSScene, base, ptr);
}
