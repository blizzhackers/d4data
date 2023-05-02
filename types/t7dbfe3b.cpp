/**
 * Definition: t7dbfe3b
 * Hash: 7dbfe3b
 */

#include "t7dbfe3b.h"

void t7dbfe3b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&dwID, base, current);
  current = ptr + 0x14;
  readData(&eNodeType, base, current);
  current = ptr + 0x18;
  readData(&eAnimLayer, base, current);
  current = ptr + 0x20;
  readData(&ptChildren, base, current);
  current = ptr + 0x30;
  readData(&eBlendParam, base, current);
  current = ptr + 0x34;
  readData(&unk_4241c63, base, current);
  current = ptr + 0x38;
  readData(&unk_5733828, base, current);
  current = ptr + 0x48;
  readData(&unk_51e2dd, base, current);
  current = ptr + 0x50;
  readData(&unk_fd3931f, base, current);
  current = ptr + 0x58;
  readData(&unk_9a6f370, base, current);
  current = ptr + 0x60;
  readData(&unk_e857c51, base, current);
  current = ptr + 0x68;
  readData(&unk_dd1cd6f, base, current);
  current = ptr + 0x6c;
  readData(&nSyncGroupIndex, base, current);
  current = ptr + 0x70;
  readData(&unk_d6d7e1b, base, current);
  ptr += 0x78;
}
