/**
 * Definition: t7e0a5501
 * Hash: 7e0a5501
 */

#include "t7e0a5501.h"

void t7e0a5501::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_180e380, base, current);
  current = ptr + 0x4;
  readData(&unk_11cfeb2, base, current);
  current = ptr + 0x8;
  readData(&unk_8c3326b, base, current);
  current = ptr + 0xc;
  readData(&unk_31f2130, base, current);
  current = ptr + 0x70;
  readData(&unk_e1de6e4, base, current);
  current = ptr + 0x78;
  readData(&unk_35d179b, base, current);
  current = ptr + 0x80;
  readData(&unk_eb81e70, base, current);
  current = ptr + 0x84;
  readData(&unk_9946895, base, current);
  current = ptr + 0x88;
  readData(&unk_15c229b, base, current);
  current = ptr + 0x188;
  readData(&dwFlags, base, current);
  ptr += 0x190;
}
