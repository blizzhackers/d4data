/**
 * Definition: FrameAnim
 * Hash: 3fb43590
 */

#include "FrameAnim.h"

void FrameAnim::read(const char* base, char* &ptr) {
  readData(&ePlaybackMode, base, ptr);
  readData(&unk_ce7df98, base, ptr);
  readData(&unk_623a91a, base, ptr);
  readData(&unk_98a3c88, base, ptr);
  readData(&unk_ff885d0, base, ptr);
  readData(&unk_ca71af4, base, ptr);
}
