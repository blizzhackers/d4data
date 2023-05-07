/**
 * Definition: LightStateParams
 * Hash: 3f128f1d
 */

#include "LightStateParams.h"

void LightStateParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&pathRadius, base, current);
  current = ptr + 0x38;
  readData(&unk_9e9e1c6, base, current);
  current = ptr + 0x70;
  readData(&unk_d2a3cb0, base, current);
  current = ptr + 0xa8;
  readData(&unk_1ee68c6, base, current);
  current = ptr + 0xe0;
  readData(&unk_500fe1e, base, current);
  current = ptr + 0x118;
  readData(&pathWidth, base, current);
  current = ptr + 0x150;
  readData(&pathHotspot, base, current);
  current = ptr + 0x188;
  readData(&pathFalloff, base, current);
  current = ptr + 0x1c0;
  readData(&pathColor, base, current);
  current = ptr + 0x1f8;
  readData(&pathIntensity, base, current);
  current = ptr + 0x230;
  readData(&unk_6634e3c, base, current);
  current = ptr + 0x234;
  readData(&unk_114300f, base, current);
  current = ptr + 0x238;
  readData(&unk_5803b69, base, current);
  current = ptr + 0x270;
  readData(&unk_f7a3d1a, base, current);
  current = ptr + 0x2a8;
  readData(&unk_4d46106, base, current);
  ptr += 0x2e0;
}
