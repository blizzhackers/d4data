/**
 * Definition: t63129ce3
 * Hash: 63129ce3
 */

#include "t63129ce3.h"

void t63129ce3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwUID, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&eType, base, ptr);
  readData(&unk_721cdbf, base, ptr);
  readData(&unk_4b2de13, base, ptr);
  readData(&unk_188a07a, base, ptr);
  readData(&unk_61c2846, base, ptr);
  readData(&unk_951ad2a, base, ptr);
  readData(&snoReward, base, ptr);
  readData(&unk_189b89b, base, ptr);
  readData(&nTimerDuration, base, ptr);
  readData(&unk_2bde7b6, base, ptr);
  readData(&unk_d3b7ed7, base, ptr);
  readData(&unk_8280b0e, base, ptr);
  readData(&unk_eff642d, base, ptr);
  readData(&unk_fc27941, base, ptr);
  readData(&unk_d9a8a05, base, ptr);
  readData(&unk_5d4cfc0, base, ptr);
  readData(&unk_669bcf8, base, ptr);
  readData(&unk_287ecb5, base, ptr);
  readData(&unk_6344bd7, base, ptr);
  readData(&unk_9c63f9d, base, ptr);
  readData(&unk_c820299, base, ptr);
  readData(&unk_fab6e45, base, ptr);
  readData(&unk_47f8481, base, ptr);
  readData(&unk_ed8215b, base, ptr);
  readData(&unk_f6ded77, base, ptr);
  readData(&unk_f84da79, base, ptr);
  readData(&unk_6367947, base, ptr);
}
