/**
 * Definition: SceneData
 * Hash: 886a0448
 */

#include "SceneData.h"

void SceneData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1197220, base, current);
  current = ptr + 0x10;
  readData(&unk_b3a0ae7, base, current);
  current = ptr + 0x18;
  readData(&ptSurfaceOctree, base, current);
  current = ptr + 0x28;
  readData(&ptSurfaceGrid, base, current);
  current = ptr + 0x38;
  readData(&unk_da9dcc1, base, current);
  ptr += 0x48;
}
