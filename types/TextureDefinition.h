/**
 * Definition: TextureDefinition
 * Hash: d877e3ba
 */

#pragma once

#include "../types.h"
#include "SerializeData.h"
#include "TexFrame.h"
#include "t835c1731.h"

#pragma push(pack, 1)

struct TextureDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eTexFormat;
  DT_WORD dwVolumeXSlices;
  DT_WORD dwVolumeYSlices;
  DT_WORD dwWidth;
  DT_WORD dwHeight;
  DT_UINT dwDepth;
  DT_BYTE dwFaceCount;
  DT_BYTE dwMipMapLevelMin;
  DT_BYTE dwMipMapLevelMax;
  DT_UINT dwImportFlags;
  DT_ENUM<DT_INT> unk_d27620;
  DT_RGBACOLORVALUE unk_dc7d39c;
  DT_BCVEC2I pHotspot;
  DT_VARIABLEARRAY<SerializeData> serTex;
  DT_VARIABLEARRAY<TexFrame> ptFrame;
  DT_VARIABLEARRAY<t835c1731> unk_20823c1;
  DT_INT64 ptPostprocessed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
