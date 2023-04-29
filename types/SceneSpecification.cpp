/**
 * Definition: SceneSpecification
 * Hash: 13555eaf
 */

#include "SceneSpecification.h"

void SceneSpecification::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_74a9537, base, ptr);
  readData(&snoPrevWorld, base, ptr);
  readData(&uPrevEntranceGUID, base, ptr);
  readData(&snoPrevLevelArea, base, ptr);
  readData(&unk_6367947, base, ptr);
  readData(&snoWeather, base, ptr);
  readData(&snoPresetWorld, base, ptr);
  readData(&nSceneChunk, base, ptr);
  readData(&unk_c9913ac, base, ptr);
}
