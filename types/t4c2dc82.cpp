/**
 * Definition: t4c2dc82
 * Hash: 4c2dc82
 */

#include "t4c2dc82.h"

void t4c2dc82::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&localTransform, base, current);
  current = ptr + 0x20;
  readData(&scale, base, current);
  current = ptr + 0x30;
  readData(&unk_10099d9, base, current);
  current = ptr + 0x34;
  readData(&unk_10099da, base, current);
  current = ptr + 0x38;
  readData(&height, base, current);
  current = ptr + 0x3c;
  readData(&friction, base, current);
  current = ptr + 0x40;
  readData(&boneIndex, base, current);
  current = ptr + 0x42;
  readData(&unk_4571c9b, base, current);
  current = ptr + 0x44;
  readData(&padding, base, current);
  ptr += 0x50;
}
