/**
 * Definition: RareMonsterNamesEntry
 * Hash: 4efaee98
 */

#include "RareMonsterNamesEntry.h"

void RareMonsterNamesEntry::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&fPrefix, base, ptr);
  readData(&snoAffixEffect, base, ptr);
  readData(&unk_4a1da9e, base, ptr);
  readData(&unk_47bc829, base, ptr);
  readData(&snoCondition, base, ptr);
  readData(&unk_340ed93, base, ptr);
}
