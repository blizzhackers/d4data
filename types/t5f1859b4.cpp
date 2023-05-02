/**
 * Definition: t5f1859b4
 * Hash: 5f1859b4
 */

#include "t5f1859b4.h"

void t5f1859b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_7339eb9, base, current);
  current = ptr + 0x8;
  readData(&unk_179f850, base, current);
  current = ptr + 0x10;
  readData(&unk_39da905, base, current);
  current = ptr + 0x9010;
  readData(&unk_6897d68, base, current);
  current = ptr + 0x12010;
  readData(&unk_f18728c, base, current);
  current = ptr + 0x12018;
  readData(&unk_a2d413a, base, current);
  current = ptr + 0x1201c;
  readData(&unk_cd14700, base, current);
  current = ptr + 0x12034;
  readData(&unk_215e5a4, base, current);
  ptr += 0x12050;
}
