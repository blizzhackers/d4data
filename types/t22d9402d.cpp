/**
 * Definition: t22d9402d
 * Hash: 22d9402d
 */

#include "t22d9402d.h"

void t22d9402d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f7b58a0, base, current);
  current = ptr + 0x4;
  readData(&unk_ee2c1dd, base, current);
  current = ptr + 0x8;
  readData(&snoEmote, base, current);
  current = ptr + 0xc;
  readData(&snoConsumable, base, current);
  ptr += 0x10;
}
