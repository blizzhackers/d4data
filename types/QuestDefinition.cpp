/**
 * Definition: QuestDefinition
 * Hash: 3ed1aefb
 */

#include "QuestDefinition.h"

void QuestDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eQuestType, base, ptr);
  readData(&unk_f88ee86, base, ptr);
  readData(&unk_4c4339b, base, ptr);
  readData(&unk_f522ece, base, ptr);
  readData(&unk_43d5008, base, ptr);
  readData(&unk_46224d, base, ptr);
  readData(&unk_43f3849, base, ptr);
  readData(&unk_48a2b16, base, ptr);
  readData(&unk_d060a69, base, ptr);
  readData(&vecStartLocation, base, ptr);
  readData(&unk_6a4ec7f, base, ptr);
  readData(&unk_c2e8448, base, ptr);
  readData(&unk_ff5c704, base, ptr);
  readData(&unk_506369e, base, ptr);
  readData(&unk_d2181f0, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_f956a05, base, ptr);
  readData(&unk_14dee1b, base, ptr);
  readData(&unk_c694251, base, ptr);
  readData(&unk_8881b0e, base, ptr);
  readData(&unk_bca2efc, base, ptr);
  readData(&unk_b89b77f, base, ptr);
  readData(&unk_c18cabd, base, ptr);
  readData(&unk_79f6e17, base, ptr);
  readData(&unk_f9c5be7, base, ptr);
  readData(&unk_6199257, base, ptr);
  readData(&unk_f322c3a, base, ptr);
  readData(&eBountyType, base, ptr);
  readData(&unk_313dbf6, base, ptr);
  readData(&unk_834fdbf, base, ptr);
  readData(&unk_b83e7b1, base, ptr);
  readData(&unk_942bcdb, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_4c868c9, base, ptr);
  readData(&unk_1755172, base, ptr);
  readData(&unk_3367716, base, ptr);
  readData(&unk_46e3956, base, ptr);
  readData(&unk_56f8e05, base, ptr);
  readData(&unk_c47e01a, base, ptr);
  readData(&unk_993f312, base, ptr);
  readData(&unk_39af3bb, base, ptr);
  readData(&unk_857ebd2, base, ptr);
  readData(&arFollowers, base, ptr);
  readData(&unk_219aee7, base, ptr);
  readData(&unk_b9ec208, base, ptr);
  readData(&unk_2aa5f20, base, ptr);
  readData(&unk_b43b442, base, ptr);
  readData(&unk_68d2b86, base, ptr);
  readData(&unk_b37e635, base, ptr);
  readData(&unk_6367947, base, ptr);
  readData(&unk_af3a4c1, base, ptr);
}
