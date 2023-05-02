/**
 * Definition: RenderPass
 * Hash: ca59c137
 */

#include "RenderPass.h"

void RenderPass::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eRenderLayer, base, current);
  current = ptr + 0x4;
  readData(&unk_39c46d9, base, current);
  current = ptr + 0x8;
  readData(&tRenderParams, base, current);
  current = ptr + 0x188;
  readData(&unk_6276112, base, current);
  current = ptr + 0x198;
  readData(&dwFlags, base, current);
  current = ptr + 0x19c;
  readData(&unk_262684c, base, current);
  current = ptr + 0x1a0;
  readData(&unk_c23801f, base, current);
  current = ptr + 0x1a8;
  readData(&ptPostprocessed, base, current);
  current = ptr + 0x1b0;
  readData(&unk_295833, base, current);
  current = ptr + 0x1c0;
  readData(&unk_1f1fb6b, base, current);
  current = ptr + 0x1d0;
  readData(&unk_e39f53a, base, current);
  current = ptr + 0x1e0;
  readData(&unk_247b377, base, current);
  current = ptr + 0x1f0;
  readData(&unk_1484b5a, base, current);
  current = ptr + 0x200;
  readData(&unk_864909d, base, current);
  current = ptr + 0x210;
  readData(&unk_9068982, base, current);
  current = ptr + 0x220;
  readData(&unk_282b17c, base, current);
  ptr += 0x230;
}
