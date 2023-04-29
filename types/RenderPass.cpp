/**
 * Definition: RenderPass
 * Hash: ca59c137
 */

#include "RenderPass.h"

void RenderPass::read(const char* base, char* &ptr) {
  readData(&eRenderLayer, base, ptr);
  readData(&unk_39c46d9, base, ptr);
  readData(&tRenderParams, base, ptr);
  readData(&unk_6276112, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_262684c, base, ptr);
  readData(&unk_c23801f, base, ptr);
  readData(&ptPostprocessed, base, ptr);
  readData(&unk_295833, base, ptr);
  readData(&unk_1f1fb6b, base, ptr);
  readData(&unk_e39f53a, base, ptr);
  readData(&unk_247b377, base, ptr);
  readData(&unk_1484b5a, base, ptr);
  readData(&unk_864909d, base, ptr);
  readData(&unk_9068982, base, ptr);
  readData(&unk_282b17c, base, ptr);
}
