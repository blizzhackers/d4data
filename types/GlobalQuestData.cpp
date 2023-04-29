/**
 * Definition: GlobalQuestData
 * Hash: f4a7dadd
 */

#include "GlobalQuestData.h"

void GlobalQuestData::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_23c11ba, base, ptr);
  readData(&unk_8bd826d, base, ptr);
  readData(&unk_d9bddf0, base, ptr);
  readData(&unk_70db485, base, ptr);
  readData(&unk_daeff02, base, ptr);
  readData(&unk_de43c60, base, ptr);
  readData(&unk_8726862, base, ptr);
  readData(&unk_4b26f7, base, ptr);
  readData(&unk_c6d58a9, base, ptr);
  readData(&unk_e318094, base, ptr);
  readData(&unk_a49964c, base, ptr);
  readData(&snoStartingQuest, base, ptr);
  readData(&unk_d99124e, base, ptr);
  readData(&unk_36bc0dc, base, ptr);
  readData(&unk_b419a05, base, ptr);
  readData(&unk_a70acb6, base, ptr);
  readData(&unk_68fb226, base, ptr);
  readData(&unk_3286df3, base, ptr);
  readData(&unk_dd4bd56, base, ptr);
  readData(&unk_195043d, base, ptr);
}
