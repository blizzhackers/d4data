/**
 * Definition: WorldSyncedData
 * Hash: df72b548
 */

#pragma once

#include "../types.h"
#include "t6cf70a0e.h"

#pragma push(pack, 1)

struct WorldSyncedData : public ComplexRead {
  DT_SNO<SnoGroup::Weather> snoWeatherOverride;
  DT_FLOAT flWeatherIntensityOverride;
  DT_UINT dwWeatherIntensityOverrideEnd;
  DT_FIXEDARRAY<t6cf70a0e, 32> unk_884c699;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::LevelArea>, 32> unk_9b85c0f;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::LevelArea>, 32> arLevelAreaSNOs;
  DT_SNO<SnoGroup::Music> unk_8e54b91;
  DT_INT unk_f4f9d6f;
  DT_FLOAT unk_55eead1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
