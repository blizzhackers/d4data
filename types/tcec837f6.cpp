/**
 * Definition: tcec837f6
 * Hash: cec837f6
 */

#include "tcec837f6.h"

void tcec837f6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&unk_790950b, base, current);
  current = ptr + 0x28;
  readData(&unk_790950c, base, current);
  current = ptr + 0x48;
  readData(&unk_790950d, base, current);
  current = ptr + 0x68;
  readData(&unk_790950e, base, current);
  current = ptr + 0x88;
  readData(&unk_790950f, base, current);
  current = ptr + 0xa8;
  readData(&unk_6a8ab2, base, current);
  current = ptr + 0xac;
  readData(&unk_5078500, base, current);
  current = ptr + 0xb0;
  readData(&unk_128669f, base, current);
  current = ptr + 0xb4;
  readData(&fAlignmentHeight, base, current);
  current = ptr + 0xb8;
  readData(&arConditions, base, current);
  current = ptr + 0xd0;
  readData(&bAnimated, base, current);
  current = ptr + 0xd4;
  readData(&unk_3ee89a, base, current);
  current = ptr + 0xd8;
  readData(&unk_a4d0200, base, current);
  current = ptr + 0xdc;
  readData(&unk_c91bb71, base, current);
  current = ptr + 0xe0;
  readData(&unk_e960d46, base, current);
  current = ptr + 0xe4;
  readData(&unk_e282419, base, current);
  current = ptr + 0xe8;
  readData(&unk_7ed70e2, base, current);
  current = ptr + 0xec;
  readData(&unk_77bdba8, base, current);
  current = ptr + 0xf0;
  readData(&unk_8f61ea4, base, current);
  current = ptr + 0xf4;
  readData(&unk_3e59e14, base, current);
  current = ptr + 0x100;
  readData(&unk_6076d47, base, current);
  current = ptr + 0x104;
  readData(&unk_8d18eb6, base, current);
  current = ptr + 0x108;
  readData(&unk_67060f1, base, current);
  current = ptr + 0x110;
  readData(&unk_3999d6e, base, current);
  current = ptr + 0x130;
  readData(&unk_3999d6f, base, current);
  current = ptr + 0x150;
  readData(&unk_3999d70, base, current);
  current = ptr + 0x170;
  readData(&unk_ff311c, base, current);
  current = ptr + 0x190;
  readData(&unk_4ac4caa, base, current);
  current = ptr + 0x1b0;
  readData(&unk_e5f3235, base, current);
  current = ptr + 0x1d0;
  readData(&unk_7fd2cb0, base, current);
  current = ptr + 0x1d4;
  readData(&unk_bb05455, base, current);
  current = ptr + 0x1d8;
  readData(&bLoop, base, current);
  current = ptr + 0x1dc;
  readData(&unk_77a6dd9, base, current);
  current = ptr + 0x1e0;
  readData(&unk_14cfb7f, base, current);
  current = ptr + 0x1e4;
  readData(&unk_4f22bac, base, current);
  current = ptr + 0x1e8;
  readData(&unk_ca7a183, base, current);
  current = ptr + 0x1ec;
  readData(&unk_78bcfac, base, current);
  current = ptr + 0x1f0;
  readData(&unk_6fdff1, base, current);
  current = ptr + 0x1f4;
  readData(&unk_440a6ad, base, current);
  current = ptr + 0x1f8;
  readData(&bDebugDraw, base, current);
  ptr += 0x200;
}
