/**
 * Definition: QuestPhase
 * Hash: 63129ce3
 */

#include "QuestPhase.h"

void QuestPhase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&dwUID, base, current);
  current = ptr + 0x14;
  readData(&dwFlags, base, current);
  current = ptr + 0x18;
  readData(&eType, base, current);
  current = ptr + 0x20;
  readData(&unk_721cdbf, base, current);
  current = ptr + 0x30;
  readData(&unk_4b2de13, base, current);
  current = ptr + 0x38;
  readData(&unk_188a07a, base, current);
  current = ptr + 0x48;
  readData(&unk_61c2846, base, current);
  current = ptr + 0x4c;
  readData(&unk_951ad2a, base, current);
  current = ptr + 0x50;
  readData(&snoReward, base, current);
  current = ptr + 0x54;
  readData(&unk_189b89b, base, current);
  current = ptr + 0x58;
  readData(&nTimerDuration, base, current);
  current = ptr + 0x5c;
  readData(&unk_2bde7b6, base, current);
  current = ptr + 0x60;
  readData(&unk_d3b7ed7, base, current);
  current = ptr + 0x70;
  readData(&unk_8280b0e, base, current);
  current = ptr + 0x74;
  readData(&unk_eff642d, base, current);
  current = ptr + 0x78;
  readData(&unk_fc27941, base, current);
  current = ptr + 0x7c;
  readData(&unk_d9a8a05, base, current);
  current = ptr + 0x80;
  readData(&unk_5d4cfc0, base, current);
  current = ptr + 0x84;
  readData(&unk_669bcf8, base, current);
  current = ptr + 0x88;
  readData(&unk_287ecb5, base, current);
  current = ptr + 0x8c;
  readData(&unk_6344bd7, base, current);
  current = ptr + 0x90;
  readData(&unk_9c63f9d, base, current);
  current = ptr + 0xa0;
  readData(&unk_c820299, base, current);
  current = ptr + 0xb0;
  readData(&unk_fab6e45, base, current);
  current = ptr + 0xb8;
  readData(&unk_47f8481, base, current);
  current = ptr + 0xc4;
  readData(&unk_ed8215b, base, current);
  current = ptr + 0xc8;
  readData(&unk_f6ded77, base, current);
  current = ptr + 0xcc;
  readData(&unk_f84da79, base, current);
  current = ptr + 0xd0;
  readData(&snoAudioContext, base, current);
  ptr += 0xd8;
}
