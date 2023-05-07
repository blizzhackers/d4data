/**
 * Definition: AffixDefinition
 * Hash: ce7ab37
 */

#include "AffixDefinition.h"

void AffixDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&eMagicType, base, current);
  current = ptr + 0x10;
  readData(&eCategory, base, current);
  current = ptr + 0x14;
  readData(&unk_1717b6e, base, current);
  current = ptr + 0x18;
  readData(&unk_1717a70, base, current);
  current = ptr + 0x20;
  readData(&tCost, base, current);
  current = ptr + 0x40;
  readData(&snoRareNamePrefixStringList, base, current);
  current = ptr + 0x44;
  readData(&snoRareNameSuffixStringList, base, current);
  current = ptr + 0x48;
  readData(&gbidAffixFamily, base, current);
  current = ptr + 0x4c;
  readData(&unk_d1d9b8, base, current);
  current = ptr + 0x60;
  readData(&unk_d03ebfd, base, current);
  current = ptr + 0x70;
  readData(&dwAllowedQualityLevels, base, current);
  current = ptr + 0x74;
  readData(&eAffixType, base, current);
  current = ptr + 0x78;
  readData(&unk_2a52848, base, current);
  current = ptr + 0x88;
  readData(&arStaticValues, base, current);
  current = ptr + 0x98;
  readData(&snoPassivePower, base, current);
  current = ptr + 0x9c;
  readData(&snoClassRequirement, base, current);
  current = ptr + 0xa0;
  readData(&unk_44ef64f, base, current);
  current = ptr + 0xb0;
  readData(&unk_f5936eb, base, current);
  current = ptr + 0xc0;
  readData(&unk_cc55a2d, base, current);
  current = ptr + 0xd0;
  readData(&unk_bd86972, base, current);
  ptr += 0xe0;
}
