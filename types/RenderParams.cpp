/**
 * Definition: RenderParams
 * Hash: c7ce2084
 */

#include "RenderParams.h"

void RenderParams::read(const char* base, char* &ptr) {
  readData(&unk_e80141f, base, ptr);
  readData(&eCullMode, base, ptr);
  readData(&fZBufferWriteEnable, base, ptr);
  readData(&eZBufferCompareFunc, base, ptr);
  readData(&flZBias, base, ptr);
  readData(&flZSlopeScaleBias, base, ptr);
  readData(&unk_bb82f2a, base, ptr);
  readData(&fAlphaTestEnable, base, ptr);
  readData(&eAlphaTestCompareFunc, base, ptr);
  readData(&bAlphaTestRefValue, base, ptr);
  readData(&fAlphaMaskEnable, base, ptr);
  readData(&eFillMode, base, ptr);
  readData(&unk_7e83826, base, ptr);
  readData(&unk_2d2237f, base, ptr);
}
