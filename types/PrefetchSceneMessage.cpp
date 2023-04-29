/**
 * Definition: PrefetchSceneMessage
 * Hash: 5d7092c4
 */

#include "PrefetchSceneMessage.h"

void PrefetchSceneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoScene, base, ptr);
}
