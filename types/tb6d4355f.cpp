/**
 * Definition: tb6d4355f
 * Hash: b6d4355f
 */

#include "tb6d4355f.h"

void tb6d4355f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b185921, base, current);
  current = ptr + 0x4;
  readData(&unk_5342cc0, base, current);
  current = ptr + 0x8;
  readData(&dwUID, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&nNeeded, base, current);
  current = ptr + 0x18;
  readData(&tScriptMessageMap, base, current);
  current = ptr + 0x60;
  readData(&unk_b88445, base, current);
  current = ptr + 0x64;
  readData(&unk_47705e2, base, current);
  current = ptr + 0x68;
  readData(&unk_92f72a4, base, current);
  current = ptr + 0x6c;
  readData(&unk_9c1ea4f, base, current);
  current = ptr + 0x70;
  readData(&snoWorld, base, current);
  current = ptr + 0x74;
  readData(&unk_e879cce, base, current);
  current = ptr + 0x78;
  readData(&unk_28bc3c5, base, current);
  current = ptr + 0x88;
  readData(&unk_53ba3a1, base, current);
  current = ptr + 0x90;
  readData(&unk_1ee0a5d, base, current);
  current = ptr + 0xc0;
  readData(&unk_debbaea, base, current);
  current = ptr + 0xd0;
  readData(&unk_6a71535, base, current);
  current = ptr + 0xd8;
  readData(&arLevelAreas, base, current);
  current = ptr + 0xe8;
  readData(&unk_c9913ac, base, current);
  current = ptr + 0xf8;
  readData(&unk_ab83298, base, current);
  current = ptr + 0x108;
  readData(&unk_a71fd1a, base, current);
  ptr += 0x110;
}
