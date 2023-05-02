/**
 * Definition: VictimMessage
 * Hash: 9fb35fd1
 */

#include "VictimMessage.h"

void VictimMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_7dbf108, base, current);
  current = ptr + 0x14;
  readData(&nKillerLevel, base, current);
  current = ptr + 0x18;
  readData(&unk_e37feff, base, current);
  current = ptr + 0x1c;
  readData(&eKillerMonsterRarity, base, current);
  current = ptr + 0x20;
  readData(&snoKillerActor, base, current);
  current = ptr + 0x24;
  readData(&unk_6e0a930, base, current);
  current = ptr + 0x28;
  readData(&eKillerTeam, base, current);
  current = ptr + 0x2c;
  readData(&pKillerRareNameGBIDs, base, current);
  current = ptr + 0x34;
  readData(&snoPowerDmgSource, base, current);
  ptr += 0x38;
}
