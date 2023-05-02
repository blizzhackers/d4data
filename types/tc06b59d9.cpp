/**
 * Definition: tc06b59d9
 * Hash: c06b59d9
 */

#include "tc06b59d9.h"

void tc06b59d9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a60e772, base, current);
  current = ptr + 0x28;
  readData(&unk_143d2e7, base, current);
  current = ptr + 0x50;
  readData(&unk_9aba5bf, base, current);
  current = ptr + 0x78;
  readData(&unk_92ab59f, base, current);
  current = ptr + 0x7c;
  readData(&fTwitch, base, current);
  current = ptr + 0x80;
  readData(&unk_a9ca82f, base, current);
  ptr += 0x84;
}
