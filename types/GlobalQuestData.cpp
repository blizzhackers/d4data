/**
 * Definition: GlobalQuestData
 * Hash: f4a7dadd
 */

#include "GlobalQuestData.h"

void GlobalQuestData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_23c11ba, base, current);
  current = ptr + 0x18;
  readData(&unk_8bd826d, base, current);
  current = ptr + 0x20;
  readData(&unk_d9bddf0, base, current);
  current = ptr + 0x28;
  readData(&unk_70db485, base, current);
  current = ptr + 0x30;
  readData(&unk_daeff02, base, current);
  current = ptr + 0x38;
  readData(&unk_de43c60, base, current);
  current = ptr + 0x40;
  readData(&unk_8726862, base, current);
  current = ptr + 0x48;
  readData(&unk_4b26f7, base, current);
  current = ptr + 0x50;
  readData(&unk_c6d58a9, base, current);
  current = ptr + 0x54;
  readData(&unk_e318094, base, current);
  current = ptr + 0x58;
  readData(&unk_a49964c, base, current);
  current = ptr + 0x5c;
  readData(&snoStartingQuest, base, current);
  current = ptr + 0x60;
  readData(&tCampaignData, base, current);
  current = ptr + 0x70;
  readData(&unk_36bc0dc, base, current);
  current = ptr + 0x80;
  readData(&unk_b419a05, base, current);
  current = ptr + 0x90;
  readData(&unk_a70acb6, base, current);
  current = ptr + 0xa0;
  readData(&unk_68fb226, base, current);
  current = ptr + 0xa4;
  readData(&unk_3286df3, base, current);
  current = ptr + 0xc0;
  readData(&unk_dd4bd56, base, current);
  current = ptr + 0xdc;
  readData(&unk_195043d, base, current);
  ptr += 0xe0;
}
