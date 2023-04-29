/**
 * Definition: taef2f516
 * Hash: aef2f516
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taef2f516 : public ComplexRead {
  DT_INT nFrameStart;
  DT_INT nFrameEnd;
  DT_FLOAT unk_a45e6bd;
  DT_FLOAT unk_36bc3de;
  DT_INT unk_fd491ef;
  DT_INT unk_737a63;
  DT_UINT unk_e3bef92;
  DT_VECTOR3D unk_8dadb11;
  DT_FLOAT flZoom;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
