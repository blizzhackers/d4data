/**
 * Definition: UILayoutEntries
 * Hash: 150d0776
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UILayoutEntries : public ComplexRead {
  DT_SNO<SnoGroup::UI> snoUI;
  DT_CHARARRAY<256> szCutoffWrite;
  DT_CHARARRAY<256> szScreenName;
  DT_ENUM<DT_INT> eGroup;
  DT_ENUM<DT_INT> eLayer;
  DT_ENUM<DT_INT> ePlatform;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_CHARARRAY<128> szCameraMarkerName;
  DT_ENUM<DT_INT> eBanner;
  DT_UINT unk_b20011c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
