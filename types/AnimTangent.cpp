/**
 * Definition: AnimTangent
 * Hash: 248771f6
 */

#include "AnimTangent.h"

void AnimTangent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_2c6615d, base, current);
  current = ptr + 0x8;
  readData(&unk_2d879de, base, current);
  current = ptr + 0x10;
  readData(&unk_2ea925f, base, current);
  current = ptr + 0x18;
  readData(&unk_90e5235, base, current);
  current = ptr + 0x20;
  readData(&unk_9206ab6, base, current);
  current = ptr + 0x28;
  readData(&unk_9328337, base, current);
  ptr += 0x30;
}
