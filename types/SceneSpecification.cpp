/**
 * Definition: SceneSpecification
 * Hash: 13555eaf
 */

#include "SceneSpecification.h"

void SceneSpecification::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x8;
  readData(&unk_74a9537, base, current);
  current = ptr + 0xc;
  readData(&snoPrevWorld, base, current);
  current = ptr + 0x10;
  readData(&uPrevEntranceGUID, base, current);
  current = ptr + 0x14;
  readData(&snoPrevLevelArea, base, current);
  current = ptr + 0x18;
  readData(&snoAudioContext, base, current);
  current = ptr + 0x1c;
  readData(&snoWeather, base, current);
  current = ptr + 0x20;
  readData(&snoPresetWorld, base, current);
  current = ptr + 0x24;
  readData(&nSceneChunk, base, current);
  current = ptr + 0x28;
  readData(&unk_c9913ac, base, current);
  ptr += 0x38;
}
