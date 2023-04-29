/**
 * Definition: t5d0fa598
 * Hash: 5d0fa598
 */

#include "t5d0fa598.h"

void t5d0fa598::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_d2632b1, base, ptr);
  readData(&unk_989f2d7, base, ptr);
  readData(&unk_74a9537, base, ptr);
  readData(&snoPrevWorld, base, ptr);
  readData(&uPrevEntranceGUID, base, ptr);
  readData(&snoPrevLevelArea, base, ptr);
  readData(&unk_c0a371a, base, ptr);
  readData(&unk_babb0a, base, ptr);
  readData(&snoPresetWorld, base, ptr);
  readData(&nSceneChunk, base, ptr);
  readData(&unk_1e9ef9d, base, ptr);
  readData(&unk_bcb06ca, base, ptr);
  readData(&unk_5215067, base, ptr);
  readData(&tDRLGCreationInfo, base, ptr);
}
