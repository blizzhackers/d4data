/**
 * Definition: TextureDefinition
 * Hash: d877e3ba
 */

#include "TextureDefinition.h"

void TextureDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eTexFormat, base, current);
  current = ptr + 0xc;
  readData(&dwVolumeXSlices, base, current);
  current = ptr + 0xe;
  readData(&dwVolumeYSlices, base, current);
  current = ptr + 0x10;
  readData(&dwWidth, base, current);
  current = ptr + 0x12;
  readData(&dwHeight, base, current);
  current = ptr + 0x14;
  readData(&dwDepth, base, current);
  current = ptr + 0x18;
  readData(&dwFaceCount, base, current);
  current = ptr + 0x19;
  readData(&dwMipMapLevelMin, base, current);
  current = ptr + 0x1a;
  readData(&dwMipMapLevelMax, base, current);
  current = ptr + 0x1c;
  readData(&dwImportFlags, base, current);
  current = ptr + 0x20;
  readData(&unk_d27620, base, current);
  current = ptr + 0x24;
  readData(&unk_dc7d39c, base, current);
  current = ptr + 0x34;
  readData(&pHotspot, base, current);
  current = ptr + 0x40;
  readData(&serTex, base, current);
  current = ptr + 0x50;
  readData(&ptFrame, base, current);
  current = ptr + 0x60;
  readData(&unk_20823c1, base, current);
  current = ptr + 0x70;
  readData(&ptPostprocessed, base, current);
  ptr += 0x78;
}
