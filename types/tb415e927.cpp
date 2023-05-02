/**
 * Definition: tb415e927
 * Hash: b415e927
 */

#include "tb415e927.h"

void tb415e927::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_bc87ec6, base, current);
  current = ptr + 0x10;
  readData(&unk_858fafc, base, current);
  current = ptr + 0x20;
  readData(&unk_422985b, base, current);
  current = ptr + 0x30;
  readData(&unk_d18ce, base, current);
  current = ptr + 0x40;
  readData(&unk_4c7bb4f, base, current);
  current = ptr + 0x50;
  readData(&unk_45f82a1, base, current);
  current = ptr + 0x60;
  readData(&unk_4854cae, base, current);
  current = ptr + 0x70;
  readData(&unk_b3ee7d3, base, current);
  current = ptr + 0x80;
  readData(&unk_ebdf572, base, current);
  current = ptr + 0x90;
  readData(&unk_849d767, base, current);
  current = ptr + 0xa0;
  readData(&unk_bd8882e, base, current);
  current = ptr + 0xb0;
  readData(&unk_6f1a5f7, base, current);
  current = ptr + 0xc0;
  readData(&unk_b159343, base, current);
  current = ptr + 0xd0;
  readData(&unk_1d69326, base, current);
  current = ptr + 0xe0;
  readData(&unk_39c7e1f, base, current);
  current = ptr + 0xf0;
  readData(&unk_f97d290, base, current);
  current = ptr + 0x100;
  readData(&unk_b7d12d, base, current);
  current = ptr + 0x110;
  readData(&unk_7ef3a56, base, current);
  current = ptr + 0x120;
  readData(&unk_5afd159, base, current);
  current = ptr + 0x130;
  readData(&arSNOs, base, current);
  current = ptr + 0x140;
  readData(&arSNONames, base, current);
  ptr += 0x150;
}
