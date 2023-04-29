/**
 * Definition: t58ae46c5
 * Hash: 58ae46c5
 */

#include "t58ae46c5.h"

void t58ae46c5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_f3d6423, base, ptr);
  readData(&unk_478755b, base, ptr);
  readData(&unk_4d01218, base, ptr);
  readData(&unk_84dd910, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_b8e650c, base, ptr);
  readData(&unk_9209538, base, ptr);
  readData(&unk_a5153a1, base, ptr);
  readData(&unk_5ed01be, base, ptr);
  readData(&unk_9b2ead, base, ptr);
  readData(&unk_bcac396, base, ptr);
  readData(&unk_85269a4, base, ptr);
  readData(&unk_701a0bf, base, ptr);
  readData(&nPermutationIndex, base, ptr);
  readData(&unk_32a328c, base, ptr);
  readData(&flAnimSpeedScale, base, ptr);
  readData(&unk_12c22c8, base, ptr);
  readData(&unk_c7ffac9, base, ptr);
  readData(&unk_c86af88, base, ptr);
  readData(&unk_396c7d1, base, ptr);
  readData(&unk_515279b, base, ptr);
  readData(&unk_1635dc2, base, ptr);
  readData(&unk_386656b, base, ptr);
}
