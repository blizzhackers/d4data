/**
 * Definition: tc542fab4
 * Hash: c542fab4
 */

#include "tc542fab4.h"

void tc542fab4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_57f1731, base, current);
  current = ptr + 0x4;
  readData(&unk_c420444, base, current);
  current = ptr + 0x8;
  readData(&unk_33d53d0, base, current);
  current = ptr + 0xc;
  readData(&unk_268c683, base, current);
  current = ptr + 0x10;
  readData(&dwPortalType, base, current);
  current = ptr + 0x14;
  readData(&unk_af5815a, base, current);
  current = ptr + 0x18;
  readData(&unk_1f57cf2, base, current);
  current = ptr + 0x1c;
  readData(&unk_9799a99, base, current);
  ptr += 0x20;
}
