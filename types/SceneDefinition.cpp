/**
 * Definition: SceneDefinition
 * Hash: 95ad0b77
 */

#include "SceneDefinition.h"

void SceneDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&unk_ec132ae, base, ptr);
  readData(&unk_a952693, base, ptr);
  readData(&arLayers, base, ptr);
  readData(&tLookLink, base, ptr);
  readData(&unk_f60a9cd, base, ptr);
  readData(&snoAppearance, base, ptr);
  readData(&unk_6367947, base, ptr);
  readData(&unk_dcccfb8, base, ptr);
  readData(&unk_dcccfb9, base, ptr);
  readData(&unk_c20ed15, base, ptr);
  readData(&unk_57e8e2b, base, ptr);
  readData(&eDRLGTileType, base, ptr);
  readData(&unk_29b7731, base, ptr);
  readData(&tFogMask, base, ptr);
}
