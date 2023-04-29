/**
 * Definition: AffixDefinition
 * Hash: ce7ab37
 */

#include "AffixDefinition.h"

void AffixDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&eMagicType, base, ptr);
  readData(&eCategory, base, ptr);
  readData(&unk_1717b6e, base, ptr);
  readData(&unk_1717a70, base, ptr);
  readData(&tCost, base, ptr);
  readData(&snoRareNamePrefixStringList, base, ptr);
  readData(&snoRareNameSuffixStringList, base, ptr);
  readData(&gbidAffixFamily, base, ptr);
  readData(&unk_d1d9b8, base, ptr);
  readData(&unk_d03ebfd, base, ptr);
  readData(&dwAllowedQualityLevels, base, ptr);
  readData(&eAffixType, base, ptr);
  readData(&unk_2a52848, base, ptr);
  readData(&unk_46fa14b, base, ptr);
  readData(&snoPassivePower, base, ptr);
  readData(&unk_14e8917, base, ptr);
  readData(&unk_44ef64f, base, ptr);
  readData(&unk_f5936eb, base, ptr);
  readData(&unk_cc55a2d, base, ptr);
  readData(&unk_bd86972, base, ptr);
}
