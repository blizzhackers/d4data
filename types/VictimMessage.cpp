/**
 * Definition: VictimMessage
 * Hash: 9fb35fd1
 */

#include "VictimMessage.h"

void VictimMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7dbf108, base, ptr);
  readData(&nKillerLevel, base, ptr);
  readData(&unk_e37feff, base, ptr);
  readData(&eKillerMonsterRarity, base, ptr);
  readData(&snoKillerActor, base, ptr);
  readData(&unk_6e0a930, base, ptr);
  readData(&eKillerTeam, base, ptr);
  readData(&pKillerRareNameGBIDs, base, ptr);
  readData(&snoPowerDmgSource, base, ptr);
}
