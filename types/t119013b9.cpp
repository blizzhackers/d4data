/**
 * Definition: t119013b9
 * Hash: 119013b9
 */

#include "t119013b9.h"

void t119013b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d8d2509, base, current);
  current = ptr + 0x14;
  readData(&unk_b677151, base, current);
  current = ptr + 0x18;
  readData(&unk_633271a, base, current);
  current = ptr + 0x1c;
  readData(&flSystemDuration, base, current);
  current = ptr + 0x20;
  readData(&unk_2f42898, base, current);
  current = ptr + 0x30;
  readData(&unk_9ca448c, base, current);
  current = ptr + 0x40;
  readData(&arIndices, base, current);
  current = ptr + 0x50;
  readData(&unk_b130897, base, current);
  current = ptr + 0x54;
  readData(&unk_f481a51, base, current);
  current = ptr + 0x58;
  readData(&unk_97ed4ea, base, current);
  current = ptr + 0x68;
  readData(&unk_15864c9, base, current);
  current = ptr + 0x78;
  readData(&arLines, base, current);
  ptr += 0x88;
}
