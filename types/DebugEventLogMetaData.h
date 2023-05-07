/**
 * Definition: DebugEventLogMetaData
 * Hash: 9d494ccc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct DebugEventLogMetaData : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_1255128;
  DT_INT unk_965113;
  DT_FLOAT unk_850f3e2;
  DT_ACD_NETWORK_NAME ann;
  SharedServerWorldPlace unk_1fc05ef;
  SharedServerWorldPlace unk_9e80738;
  DT_VECTOR3D bounds;
  DT_RGBACOLOR rgbaColor;
  DT_UINT unk_8273480;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
