/**
 * Definition: tb987c332
 * Hash: b987c332
 */

#include "tb987c332.h"

void tb987c332::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&snoNormal, base, current);
  current = ptr + 0x10;
  readData(&unk_829b337, base, current);
  current = ptr + 0x14;
  readData(&snoMask, base, current);
  current = ptr + 0x18;
  readData(&unk_df7a801, base, current);
  current = ptr + 0x1c;
  readData(&unk_254bd5e, base, current);
  current = ptr + 0x20;
  readData(&unk_e0611b0, base, current);
  current = ptr + 0x24;
  readData(&hIcon, base, current);
  ptr += 0x28;
}
