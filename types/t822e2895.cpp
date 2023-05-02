/**
 * Definition: t822e2895
 * Hash: 822e2895
 */

#include "t822e2895.h"

void t822e2895::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fIsFogged, base, current);
  current = ptr + 0x8;
  readData(&unk_9b03b68, base, current);
  current = ptr + 0x40;
  readData(&unk_626bdd1, base, current);
  current = ptr + 0x78;
  readData(&unk_b6d6da5, base, current);
  current = ptr + 0xb0;
  readData(&unk_199c08f, base, current);
  current = ptr + 0xe8;
  readData(&unk_ad452f7, base, current);
  current = ptr + 0x120;
  readData(&unk_74cb27e, base, current);
  current = ptr + 0x158;
  readData(&unk_a788b48, base, current);
  current = ptr + 0x190;
  readData(&unk_2e75c3a, base, current);
  current = ptr + 0x1c8;
  readData(&unk_b2aba89, base, current);
  current = ptr + 0x200;
  readData(&unk_72030bc, base, current);
  current = ptr + 0x238;
  readData(&unk_7204f87, base, current);
  current = ptr + 0x270;
  readData(&unk_32d918a, base, current);
  current = ptr + 0x2a8;
  readData(&unk_f95c9b0, base, current);
  current = ptr + 0x2e0;
  readData(&unk_aef59b6, base, current);
  current = ptr + 0x318;
  readData(&unk_f5edab3, base, current);
  current = ptr + 0x350;
  readData(&unk_5014cdd, base, current);
  current = ptr + 0x388;
  readData(&unk_647fc8, base, current);
  current = ptr + 0x3c0;
  readData(&unk_a8a3bbf, base, current);
  current = ptr + 0x3c8;
  readData(&unk_68b6393, base, current);
  current = ptr + 0x400;
  readData(&unk_fa30591, base, current);
  current = ptr + 0x438;
  readData(&unk_da3c9c0, base, current);
  current = ptr + 0x470;
  readData(&unk_35f6be9, base, current);
  current = ptr + 0x4a8;
  readData(&unk_3db80f1, base, current);
  current = ptr + 0x4e0;
  readData(&unk_95c9a3c, base, current);
  current = ptr + 0x518;
  readData(&unk_49c7577, base, current);
  current = ptr + 0x51c;
  readData(&unk_2ba647c, base, current);
  current = ptr + 0x520;
  readData(&unk_babc18b, base, current);
  current = ptr + 0x558;
  readData(&pathWind, base, current);
  ptr += 0x590;
}
