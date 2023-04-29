/**
 * Definition: tb987c332
 * Hash: b987c332
 */

#include "tb987c332.h"

void tb987c332::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&hLabel, base, ptr);
  readData(&snoNormal, base, ptr);
  readData(&unk_829b337, base, ptr);
  readData(&snoMask, base, ptr);
  readData(&unk_df7a801, base, ptr);
  readData(&unk_254bd5e, base, ptr);
  readData(&unk_e0611b0, base, ptr);
  readData(&hIcon, base, ptr);
}
