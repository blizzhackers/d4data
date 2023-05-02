/**
 * Definition: t3adfcfd4
 * Hash: 3adfcfd4
 */

#include "t3adfcfd4.h"

void t3adfcfd4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szName, base, current);
  current = ptr + 0x20;
  readData(&snoWorld, base, current);
  current = ptr + 0x24;
  readData(&unk_d6d0056, base, current);
  current = ptr + 0x28;
  readData(&snoActor, base, current);
  current = ptr + 0x30;
  readData(&unk_a3ac836, base, current);
  current = ptr + 0x40;
  readData(&unk_cd15187, base, current);
  current = ptr + 0x50;
  readData(&arrItems, base, current);
  current = ptr + 0xb0;
  readData(&unk_87a6362, base, current);
  ptr += 0xb8;
}
