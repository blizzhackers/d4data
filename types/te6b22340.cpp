/**
 * Definition: te6b22340
 * Hash: e6b22340
 */

#include "te6b22340.h"

void te6b22340::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ea28b4c, base, current);
  current = ptr + 0x10;
  readData(&unk_f2499b0, base, current);
  current = ptr + 0x14;
  readData(&unk_755f012, base, current);
  current = ptr + 0x1c;
  readData(&tHorizontalOffset, base, current);
  current = ptr + 0x24;
  readData(&tScale, base, current);
  current = ptr + 0x2c;
  readData(&tYaw, base, current);
  current = ptr + 0x34;
  readData(&unk_609e23d, base, current);
  current = ptr + 0x38;
  readData(&unk_d8fcfe4, base, current);
  current = ptr + 0x3c;
  readData(&unk_435bdfd, base, current);
  current = ptr + 0x40;
  readData(&tConvPageZoomedType, base, current);
  current = ptr + 0x44;
  readData(&tVerticalOffset, base, current);
  current = ptr + 0x4c;
  readData(&unk_2a8c4b6, base, current);
  ptr += 0x50;
}
