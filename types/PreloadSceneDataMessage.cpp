/**
 * Definition: PreloadSceneDataMessage
 * Hash: 40933794
 */

#include "PreloadSceneDataMessage.h"

void PreloadSceneDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSScene, base, ptr);
  readData(&snoScene, base, ptr);
}
