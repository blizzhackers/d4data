/**
 * Definition: GlobalPortalData
 * Hash: ed71a6bd
 */

#pragma once

#include "../types.h"
#include "DynamicPortalInfo.h"
#include "PortalInfo.h"
#include "t23d0a29c.h"

#pragma push(pack, 1)

struct GlobalPortalData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  PortalInfo unk_94ef354;
  PortalInfo unk_17b3d69;
  PortalInfo unk_40a7880;
  PortalInfo unk_5b9ef28;
  PortalInfo unk_70c33;
  PortalInfo unk_aab21d0;
  PortalInfo unk_7cf3237;
  DT_FIXEDARRAY<t23d0a29c, 8> unk_5d1c931;
  DT_VARIABLEARRAY<DynamicPortalInfo> arPortalTypes;
  DT_UINT unk_b42ac97;
  DT_UINT unk_f3c5748;
  DT_UINT unk_2b9b577;
  DT_UINT unk_706c5c5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
