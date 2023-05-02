/**
 * Definition: tb87c3c7b
 * Hash: b87c3c7b
 */

#include "tb87c3c7b.h"

void tb87c3c7b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_eb1dc3b, base, current);
  current = ptr + 0x4;
  readData(&unk_ec2f296, base, current);
  current = ptr + 0x8;
  readData(&unk_f5079b, base, current);
  current = ptr + 0xc;
  readData(&unk_2c8d78e, base, current);
  current = ptr + 0x10;
  readData(&unk_57f1731, base, current);
  current = ptr + 0x14;
  readData(&unk_c420444, base, current);
  current = ptr + 0x18;
  readData(&unk_268c683, base, current);
  current = ptr + 0x1c;
  readData(&unk_33d53d0, base, current);
  ptr += 0x20;
}
