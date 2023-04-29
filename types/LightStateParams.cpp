/**
 * Definition: LightStateParams
 * Hash: 3f128f1d
 */

#include "LightStateParams.h"

void LightStateParams::read(const char* base, char* &ptr) {
  readData(&pathRadius, base, ptr);
  readData(&unk_9e9e1c6, base, ptr);
  readData(&unk_d2a3cb0, base, ptr);
  readData(&unk_1ee68c6, base, ptr);
  readData(&unk_500fe1e, base, ptr);
  readData(&unk_5c0c2ed, base, ptr);
  readData(&pathHotspot, base, ptr);
  readData(&pathFalloff, base, ptr);
  readData(&pathColor, base, ptr);
  readData(&pathIntensity, base, ptr);
  readData(&unk_6634e3c, base, ptr);
  readData(&unk_114300f, base, ptr);
  readData(&unk_5803b69, base, ptr);
  readData(&unk_f7a3d1a, base, ptr);
  readData(&unk_4d46106, base, ptr);
}
