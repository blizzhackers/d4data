/**
 * Definition: t150d0776
 * Hash: 150d0776
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t150d0776 : public ComplexRead {
  DT_SNO<SnoGroup::Ui> snoUI;
  DT_CHARARRAY<256> unk_4bb155f;
  DT_CHARARRAY<256> szScreenName;
  DT_ENUM<DT_INT> eGroup;
  DT_ENUM<DT_INT> eLayer;
  DT_ENUM<DT_INT> ePlatform;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_CHARARRAY<128> unk_f292059;
  DT_ENUM<DT_INT> eBanner;
  DT_UINT unk_b20011c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
