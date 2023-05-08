/**
 * Definition: WeatherDefinition
 * Hash: 2720a839
 */

#pragma once

#include "../types.h"
#include "ColorCorrectionParams.h"
#include "WeatherStateParams.h"
#include "t27090ba7.h"
#include "t3a9f0d72.h"
#include "t3f7811d2.h"
#include "ta1e96c7e.h"
#include "tca1fcba0.h"

#pragma push(pack, 1)

struct WeatherDefinition : public ComplexRead {
  DT_INT64 ptPostprocessed;
  DT_SNO<SnoGroup::Weather> snoParentWeather;
  DT_INT unk_45703df;
  DT_FIXEDARRAY<t3f7811d2, 3> unk_5989069;
  WeatherStateParams tParamsNotRaining;
  WeatherStateParams tParamsWhenRaining;
  ColorCorrectionParams tColorCorrection;
  t27090ba7 unk_1c3741b;
  ta1e96c7e unk_b038972;
  t3a9f0d72 unk_c68eb66;
  tca1fcba0 unk_319c94;
  DT_TAGMAP<DT_INT> unk_dc54395;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
