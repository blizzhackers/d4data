/**
 * Definition: CriteriaModifier
 * Hash: c1fa762
 */

#include "CriteriaModifier.h"

void CriteriaModifier::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_43805b9, base, current);
  current = ptr + 0x4;
  readData(&unk_952d470, base, current);
  current = ptr + 0x8;
  readData(&snoname, base, current);
  current = ptr + 0x10;
  readData(&unk_33d39d0, base, current);
  current = ptr + 0x14;
  readData(&eSlot, base, current);
  current = ptr + 0x18;
  readData(&eCrafterType, base, current);
  current = ptr + 0x1c;
  readData(&eCCType, base, current);
  current = ptr + 0x20;
  readData(&szName, base, current);
  current = ptr + 0x24;
  readData(&eIQL, base, current);
  current = ptr + 0x28;
  readData(&eMonsterRarity, base, current);
  current = ptr + 0x2c;
  readData(&eDamageType, base, current);
  current = ptr + 0x30;
  readData(&unk_41f8768, base, current);
  current = ptr + 0x34;
  readData(&unk_720f501, base, current);
  current = ptr + 0x38;
  readData(&unk_b0a7ee9, base, current);
  current = ptr + 0x3c;
  readData(&unk_756ebc1, base, current);
  current = ptr + 0x40;
  readData(&unk_99e9721, base, current);
  current = ptr + 0x44;
  readData(&unk_eb34eae, base, current);
  current = ptr + 0x48;
  readData(&uVal, base, current);
  current = ptr + 0x4c;
  readData(&eBountyType, base, current);
  current = ptr + 0x50;
  readData(&unk_cf9093b, base, current);
  current = ptr + 0x54;
  readData(&gbidPetType, base, current);
  current = ptr + 0x58;
  readData(&eGizmoType, base, current);
  current = ptr + 0x60;
  readData(&tDateTime, base, current);
  current = ptr + 0x68;
  readData(&uOperand, base, current);
  ptr += 0x70;
}
