/**
 * Definition: tbc26b221
 * Hash: bc26b221
 */

#include "tbc26b221.h"

void tbc26b221::read(const char* base, char* &ptr) {
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
  readData(&unk_85269a4, base, current);
  current = ptr + 0x4c;
  readData(&dwObjectID, base, current);
  current = ptr + 0x50;
  readData(&arKeys, base, current);
  current = ptr + 0x68;
  readData(&unk_9717a7e, base, current);
  ptr += 0x70;
}
