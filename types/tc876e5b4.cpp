/**
 * Definition: tc876e5b4
 * Hash: c876e5b4
 */

#include "tc876e5b4.h"

void tc876e5b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&tDuration, base, current);
  current = ptr + 0x4c;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x50;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x54;
  readData(&tCleanup, base, current);
  current = ptr + 0x6c;
  readData(&unk_49e9257, base, current);
  current = ptr + 0x70;
  readData(&unk_5490979, base, current);
  current = ptr + 0x74;
  readData(&dwPad, base, current);
  current = ptr + 0x78;
  readData(&eObjectType, base, current);
  current = ptr + 0x7c;
  readData(&unk_a1d7e72, base, current);
  current = ptr + 0x84;
  readData(&dwObjectID, base, current);
  current = ptr + 0x88;
  readData(&tHardpointLink, base, current);
  current = ptr + 0x90;
  readData(&unk_896cea7, base, current);
  current = ptr + 0x94;
  readData(&unk_454a2a1, base, current);
  current = ptr + 0x98;
  readData(&unk_991ae81, base, current);
  current = ptr + 0x9c;
  readData(&unk_10734fd, base, current);
  ptr += 0xa8;
}
