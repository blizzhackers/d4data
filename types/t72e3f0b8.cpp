/**
 * Definition: t72e3f0b8
 * Hash: 72e3f0b8
 */

#include "t72e3f0b8.h"

void t72e3f0b8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_57f1731, base, current);
  current = ptr + 0x14;
  readData(&unk_c420444, base, current);
  current = ptr + 0x18;
  readData(&unk_33d53d0, base, current);
  current = ptr + 0x1c;
  readData(&unk_336454f, base, current);
  current = ptr + 0x20;
  readData(&unk_a89ad98, base, current);
  current = ptr + 0x24;
  readData(&unk_7e152af, base, current);
  current = ptr + 0x28;
  readData(&unk_9fe8af0, base, current);
  current = ptr + 0x2c;
  readData(&unk_389d240, base, current);
  current = ptr + 0x30;
  readData(&unk_720f501, base, current);
  current = ptr + 0x34;
  readData(&unk_268c683, base, current);
  current = ptr + 0x38;
  readData(&unk_ba8fd29, base, current);
  current = ptr + 0x3c;
  readData(&snoGizmoCondition, base, current);
  current = ptr + 0x40;
  readData(&unk_8acbebf, base, current);
  current = ptr + 0x44;
  readData(&unk_8755612, base, current);
  current = ptr + 0x48;
  readData(&unk_4908570, base, current);
  current = ptr + 0x4c;
  readData(&unk_9799a99, base, current);
  ptr += 0x50;
}
