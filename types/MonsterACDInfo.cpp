/**
 * Definition: MonsterACDInfo
 * Hash: 59bc9f5c
 */

#include "MonsterACDInfo.h"

void MonsterACDInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d1f4575, base, current);
  current = ptr + 0x4;
  readData(&eGender, base, current);
  current = ptr + 0x8;
  readData(&eWeaponClass, base, current);
  current = ptr + 0xc;
  readData(&unk_e1f5441, base, current);
  current = ptr + 0x10;
  readData(&snoMonsterAffixes, base, current);
  current = ptr + 0x24;
  readData(&unk_bec65ae, base, current);
  ptr += 0x38;
}
