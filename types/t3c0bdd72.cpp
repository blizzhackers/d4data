/**
 * Definition: t3c0bdd72
 * Hash: 3c0bdd72
 */

#include "t3c0bdd72.h"

void t3c0bdd72::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arPieces, base, current);
  current = ptr + 0x10;
  readData(&unk_85db88e, base, current);
  current = ptr + 0x20;
  readData(&unk_767477, base, current);
  current = ptr + 0x30;
  readData(&tScale, base, current);
  current = ptr + 0x38;
  readData(&unk_f2499b0, base, current);
  current = ptr + 0x3c;
  readData(&tHorizontalOffset, base, current);
  current = ptr + 0x44;
  readData(&tYaw, base, current);
  current = ptr + 0x4c;
  readData(&unk_609e23d, base, current);
  current = ptr + 0x50;
  readData(&unk_d8fcfe4, base, current);
  current = ptr + 0x54;
  readData(&unk_435bdfd, base, current);
  current = ptr + 0x58;
  readData(&tConvPageZoomedType, base, current);
  current = ptr + 0x5c;
  readData(&tVerticalOffset, base, current);
  current = ptr + 0x64;
  readData(&unk_2a8c4b6, base, current);
  ptr += 0x68;
}
