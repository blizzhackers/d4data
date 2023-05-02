/**
 * Definition: SceneChunk
 * Hash: 959c51c7
 */

#include "SceneChunk.h"

void SceneChunk::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoname, base, current);
  current = ptr + 0x4;
  readData(&transform, base, current);
  current = ptr + 0x20;
  readData(&tSceneSpec, base, current);
  ptr += 0x58;
}
