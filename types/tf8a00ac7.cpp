/**
 * Definition: tf8a00ac7
 * Hash: f8a00ac7
 */

#include "tf8a00ac7.h"

void tf8a00ac7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&unk_a82d707, base, current);
  current = ptr + 0x4c;
  readData(&flDuration, base, current);
  current = ptr + 0x50;
  readData(&flDistance, base, current);
  current = ptr + 0x54;
  readData(&unk_991ae81, base, current);
  ptr += 0x58;
}
