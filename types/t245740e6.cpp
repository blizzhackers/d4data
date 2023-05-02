/**
 * Definition: t245740e6
 * Hash: 245740e6
 */

#include "t245740e6.h"

void t245740e6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4c75a49, base, current);
  current = ptr + 0x4;
  readData(&unk_7766bf8, base, current);
  current = ptr + 0x8;
  readData(&unk_7e856a, base, current);
  current = ptr + 0xc;
  readData(&unk_a12fb39, base, current);
  current = ptr + 0x10;
  readData(&unk_27240d, base, current);
  current = ptr + 0x14;
  readData(&unk_2ff5bcb, base, current);
  current = ptr + 0x18;
  readData(&unk_8d86719, base, current);
  current = ptr + 0x1c;
  readData(&unk_9a7aefe, base, current);
  ptr += 0x20;
}
