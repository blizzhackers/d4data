/**
 * Definition: SceneDefinition
 * Hash: 95ad0b77
 */

#include "SceneDefinition.h"

void SceneDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&aabbBounds, base, current);
  current = ptr + 0x24;
  readData(&unk_ec132ae, base, current);
  current = ptr + 0x3c;
  readData(&unk_a952693, base, current);
  current = ptr + 0x40;
  readData(&arLayers, base, current);
  current = ptr + 0x50;
  readData(&tLookLink, base, current);
  current = ptr + 0x58;
  readData(&unk_f60a9cd, base, current);
  current = ptr + 0x68;
  readData(&snoAppearance, base, current);
  current = ptr + 0x6c;
  readData(&snoAudioContext, base, current);
  current = ptr + 0x70;
  readData(&unk_dcccfb8, base, current);
  current = ptr + 0x74;
  readData(&unk_dcccfb9, base, current);
  current = ptr + 0x78;
  readData(&unk_c20ed15, base, current);
  current = ptr + 0x88;
  readData(&unk_57e8e2b, base, current);
  current = ptr + 0xb0;
  readData(&eDRLGTileType, base, current);
  current = ptr + 0xb8;
  readData(&unk_29b7731, base, current);
  current = ptr + 0xe0;
  readData(&tFogMask, base, current);
  ptr += 0xf8;
}
