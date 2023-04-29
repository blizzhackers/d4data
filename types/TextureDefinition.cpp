/**
 * Definition: TextureDefinition
 * Hash: d877e3ba
 */

#include "TextureDefinition.h"

void TextureDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eTexFormat, base, ptr);
  readData(&dwVolumeXSlices, base, ptr);
  readData(&dwVolumeYSlices, base, ptr);
  readData(&dwWidth, base, ptr);
  readData(&dwHeight, base, ptr);
  readData(&dwDepth, base, ptr);
  readData(&dwFaceCount, base, ptr);
  readData(&dwMipMapLevelMin, base, ptr);
  readData(&dwMipMapLevelMax, base, ptr);
  readData(&dwImportFlags, base, ptr);
  readData(&unk_d27620, base, ptr);
  readData(&unk_dc7d39c, base, ptr);
  readData(&pHotspot, base, ptr);
  readData(&serTex, base, ptr);
  readData(&ptFrame, base, ptr);
  readData(&unk_20823c1, base, ptr);
  readData(&ptPostprocessed, base, ptr);
}
