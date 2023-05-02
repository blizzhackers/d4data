/**
 * Definition: t5d0fa598
 * Hash: 5d0fa598
 */

#include "t5d0fa598.h"

void t5d0fa598::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x8;
  readData(&unk_d2632b1, base, current);
  current = ptr + 0xc;
  readData(&unk_989f2d7, base, current);
  current = ptr + 0x10;
  readData(&unk_74a9537, base, current);
  current = ptr + 0x14;
  readData(&snoPrevWorld, base, current);
  current = ptr + 0x18;
  readData(&uPrevEntranceGUID, base, current);
  current = ptr + 0x1c;
  readData(&snoPrevLevelArea, base, current);
  current = ptr + 0x20;
  readData(&unk_c0a371a, base, current);
  current = ptr + 0x30;
  readData(&unk_babb0a, base, current);
  current = ptr + 0x40;
  readData(&snoPresetWorld, base, current);
  current = ptr + 0x44;
  readData(&nSceneChunk, base, current);
  current = ptr + 0x48;
  readData(&unk_1e9ef9d, base, current);
  current = ptr + 0x50;
  readData(&unk_bcb06ca, base, current);
  current = ptr + 0xd4;
  readData(&unk_5215067, base, current);
  current = ptr + 0x118;
  readData(&tDRLGCreationInfo, base, current);
  ptr += 0x134;
}
