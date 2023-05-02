/**
 * Definition: t6215cb8e
 * Hash: 6215cb8e
 */

#include "t6215cb8e.h"

void t6215cb8e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flRadius, base, current);
  current = ptr + 0x14;
  readData(&unk_2fd1cdb, base, current);
  current = ptr + 0x18;
  readData(&unk_dd52cf1, base, current);
  current = ptr + 0x20;
  readData(&unk_87acb69, base, current);
  current = ptr + 0x28;
  readData(&unk_87acb6a, base, current);
  current = ptr + 0x30;
  readData(&unk_87acb6b, base, current);
  current = ptr + 0x38;
  readData(&unk_9854b6a, base, current);
  current = ptr + 0x40;
  readData(&flChance, base, current);
  current = ptr + 0x44;
  readData(&dwFlags, base, current);
  current = ptr + 0x48;
  readData(&unk_2a8c4b6, base, current);
  current = ptr + 0x4c;
  readData(&unk_335f70a, base, current);
  current = ptr + 0x50;
  readData(&unk_c22ddc4, base, current);
  current = ptr + 0x54;
  readData(&unk_6ead041, base, current);
  current = ptr + 0x5c;
  readData(&unk_c1d96ad, base, current);
  current = ptr + 0xe0;
  readData(&unk_a25251a, base, current);
  current = ptr + 0xf0;
  readData(&unk_9598b68, base, current);
  current = ptr + 0xf8;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0xfc;
  readData(&unk_e12fd27, base, current);
  current = ptr + 0x10c;
  readData(&szLookName, base, current);
  current = ptr + 0x110;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x114;
  readData(&dwPad, base, current);
  ptr += 0x118;
}
