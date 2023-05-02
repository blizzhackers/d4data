/**
 * Definition: FrameAnim
 * Hash: 3fb43590
 */

#include "FrameAnim.h"

void FrameAnim::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ePlaybackMode, base, current);
  current = ptr + 0x4;
  readData(&unk_ce7df98, base, current);
  current = ptr + 0xc;
  readData(&unk_623a91a, base, current);
  current = ptr + 0x14;
  readData(&unk_98a3c88, base, current);
  current = ptr + 0x18;
  readData(&unk_ff885d0, base, current);
  current = ptr + 0x20;
  readData(&unk_ca71af4, base, current);
  ptr += 0x24;
}
