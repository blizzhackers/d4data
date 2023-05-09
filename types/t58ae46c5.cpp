/**
 * Definition: t58ae46c5
 * Hash: 58ae46c5
 */

#include "t58ae46c5.h"

void t58ae46c5::read(const char* base, char* &ptr) {
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
  readData(&unk_f3d6423, base, current);
  current = ptr + 0x7c;
  readData(&unk_478755b, base, current);
  current = ptr + 0x80;
  readData(&unk_4d01218, base, current);
  current = ptr + 0x84;
  readData(&unk_84dd910, base, current);
  current = ptr + 0x88;
  readData(&dwActorID, base, current);
  current = ptr + 0x8c;
  readData(&unk_b8e650c, base, current);
  current = ptr + 0x90;
  readData(&unk_9209538, base, current);
  current = ptr + 0x94;
  readData(&unk_a5153a1, base, current);
  current = ptr + 0x98;
  readData(&unk_5ed01be, base, current);
  current = ptr + 0x9c;
  readData(&unk_9b2ead, base, current);
  current = ptr + 0xa0;
  readData(&unk_bcac396, base, current);
  current = ptr + 0xa8;
  readData(&unk_85269a4, base, current);
  current = ptr + 0xac;
  readData(&unk_701a0bf, base, current);
  current = ptr + 0xb0;
  readData(&nPermutationIndex, base, current);
  current = ptr + 0xb4;
  readData(&unk_32a328c, base, current);
  current = ptr + 0xb8;
  readData(&flAnimSpeedScale, base, current);
  current = ptr + 0xbc;
  readData(&unk_12c22c8, base, current);
  current = ptr + 0xc0;
  readData(&unk_c7ffac9, base, current);
  current = ptr + 0xc4;
  readData(&unk_c86af88, base, current);
  current = ptr + 0xc8;
  readData(&unk_396c7d1, base, current);
  current = ptr + 0xcc;
  readData(&unk_515279b, base, current);
  current = ptr + 0xd0;
  readData(&szLocatorName, base, current);
  current = ptr + 0xd4;
  readData(&unk_386656b, base, current);
  ptr += 0xd8;
}
