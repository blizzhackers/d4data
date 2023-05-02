/**
 * Definition: RareMonsterNamesEntry
 * Hash: 4efaee98
 */

#include "RareMonsterNamesEntry.h"

void RareMonsterNamesEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&fPrefix, base, current);
  current = ptr + 0x108;
  readData(&snoAffixEffect, base, current);
  current = ptr + 0x110;
  readData(&unk_4a1da9e, base, current);
  current = ptr + 0x120;
  readData(&unk_47bc829, base, current);
  current = ptr + 0x124;
  readData(&snoCondition, base, current);
  current = ptr + 0x128;
  readData(&unk_340ed93, base, current);
  ptr += 0x130;
}
