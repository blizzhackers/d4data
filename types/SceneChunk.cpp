/**
 * Definition: SceneChunk
 * Hash: 959c51c7
 */

#include "SceneChunk.h"

void SceneChunk::read(const char* base, char* &ptr) {
  readData(&snoname, base, ptr);
  readData(&transform, base, ptr);
  readData(&tSceneSpec, base, ptr);
}
