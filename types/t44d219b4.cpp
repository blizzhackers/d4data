/**
 * Definition: t44d219b4
 * Hash: 44d219b4
 */

#include "t44d219b4.h"

void t44d219b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_9598b68, base, current);
  current = ptr + 0x8;
  readData(&snoAppearance, base, current);
  current = ptr + 0xc;
  readData(&unk_c734af2, base, current);
  current = ptr + 0x10;
  readData(&unk_68641f4, base, current);
  current = ptr + 0x14;
  readData(&unk_bbec3b6, base, current);
  current = ptr + 0x18;
  readData(&unk_31fa129, base, current);
  ptr += 0x1c;
}
