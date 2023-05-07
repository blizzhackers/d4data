/**
 * Definition: RenderParams
 * Hash: c7ce2084
 */

#include "RenderParams.h"

void RenderParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e80141f, base, current);
  current = ptr + 0x4;
  readData(&eCullMode, base, current);
  current = ptr + 0x8;
  readData(&fZBufferWriteEnable, base, current);
  current = ptr + 0xc;
  readData(&eZBufferCompareFunc, base, current);
  current = ptr + 0x10;
  readData(&flZBias, base, current);
  current = ptr + 0x14;
  readData(&flZSlopeScaleBias, base, current);
  current = ptr + 0x18;
  readData(&tStencilParams, base, current);
  current = ptr + 0x48;
  readData(&fAlphaTestEnable, base, current);
  current = ptr + 0x4c;
  readData(&eAlphaTestCompareFunc, base, current);
  current = ptr + 0x50;
  readData(&bAlphaTestRefValue, base, current);
  current = ptr + 0x54;
  readData(&fAlphaMaskEnable, base, current);
  current = ptr + 0x58;
  readData(&eFillMode, base, current);
  current = ptr + 0x5c;
  readData(&unk_7e83826, base, current);
  current = ptr + 0x60;
  readData(&tAlphaBlend, base, current);
  ptr += 0x180;
}
