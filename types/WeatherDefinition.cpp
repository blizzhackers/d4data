/**
 * Definition: WeatherDefinition
 * Hash: 2720a839
 */

#include "WeatherDefinition.h"

void WeatherDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&ptPostprocessed, base, ptr);
  readData(&unk_1d4db0a, base, ptr);
  readData(&unk_45703df, base, ptr);
  readData(&unk_5989069, base, ptr);
  readData(&tParamsNotRaining, base, ptr);
  readData(&tParamsWhenRaining, base, ptr);
  readData(&tColorCorrection, base, ptr);
  readData(&unk_1c3741b, base, ptr);
  readData(&unk_b038972, base, ptr);
  readData(&unk_c68eb66, base, ptr);
  readData(&unk_319c94, base, ptr);
  readData(&unk_dc54395, base, ptr);
}
