/**
 * Definition: t6fb40ed3
 * Hash: 6fb40ed3
 */

#include "t6fb40ed3.h"

void t6fb40ed3::read(const char* base, char* &ptr) {
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
  readData(&unk_668d971, base, current);
  current = ptr + 0x4c;
  readData(&flBlendTime, base, current);
  current = ptr + 0x50;
  readData(&dwActorID, base, current);
  current = ptr + 0x54;
  readData(&unk_279aa5a, base, current);
  ptr += 0x58;
}
