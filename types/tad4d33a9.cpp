/**
 * Definition: tad4d33a9
 * Hash: ad4d33a9
 */

#include "tad4d33a9.h"

void tad4d33a9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nWidth, base, current);
  current = ptr + 0x4;
  readData(&nHeight, base, current);
  current = ptr + 0x8;
  readData(&nDepth, base, current);
  current = ptr + 0xc;
  readData(&unk_a952693, base, current);
  current = ptr + 0x10;
  readData(&wpOrigin, base, current);
  current = ptr + 0x20;
  readData(&unk_aa0958e, base, current);
  current = ptr + 0x30;
  readData(&unk_aa09583, base, current);
  current = ptr + 0x40;
  readData(&unk_aa0957e, base, current);
  current = ptr + 0x50;
  readData(&unk_dd3cf4b, base, current);
  current = ptr + 0x60;
  readData(&unk_dd3cf40, base, current);
  current = ptr + 0x70;
  readData(&unk_dd3cf3b, base, current);
  ptr += 0x80;
}
