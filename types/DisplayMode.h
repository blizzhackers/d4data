/**
 * Definition: DisplayMode
 * Hash: 2a394bbb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DisplayMode : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> dwWindowMode;
  DT_INT nWinLeft;
  DT_INT nWinTop;
  DT_UINT dwUIOptWidth;
  DT_UINT dwUIOptHeight;
  DT_UINT dwWidth;
  DT_UINT dwHeight;
  DT_INT nRefreshRate;
  DT_UINT unk_5691443;
  DT_ENUM<DT_INT> unk_a9bc210;
  DT_UINT dwMSAALevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
