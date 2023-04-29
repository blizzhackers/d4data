/**
 * Definition: ImageFileID
 * Hash: fb3f03d0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ImageFileID : public ComplexRead {
  DT_CHARARRAY<256> szFileName;
  DT_CHARARRAY<256> szSourceFileName;
  DT_INT nFrameIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
