/**
 * Definition: td27e269a
 * Hash: d27e269a
 */

#include "td27e269a.h"

void td27e269a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arDungeonLists, base, current);
  current = ptr + 0x30;
  readData(&unk_6ccc3cf, base, current);
  current = ptr + 0x40;
  readData(&unk_6b198fe, base, current);
  current = ptr + 0x44;
  readData(&unk_2da258, base, current);
  current = ptr + 0x48;
  readData(&unk_74b00e3, base, current);
  current = ptr + 0x4c;
  readData(&unk_aa2399c, base, current);
  current = ptr + 0x50;
  readData(&unk_855d467, base, current);
  current = ptr + 0x54;
  readData(&unk_908474b, base, current);
  current = ptr + 0x5c;
  readData(&unk_408865c, base, current);
  ptr += 0x68;
}
