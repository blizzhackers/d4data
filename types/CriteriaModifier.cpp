/**
 * Definition: CriteriaModifier
 * Hash: c1fa762
 */

#include "CriteriaModifier.h"

void CriteriaModifier::read(const char* base, char* &ptr) {
  readData(&unk_43805b9, base, ptr);
  readData(&unk_952d470, base, ptr);
  readData(&snoname, base, ptr);
  readData(&unk_33d39d0, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&eCrafterType, base, ptr);
  readData(&eCCType, base, ptr);
  readData(&szName, base, ptr);
  readData(&eIQL, base, ptr);
  readData(&eMonsterRarity, base, ptr);
  readData(&eDamageType, base, ptr);
  readData(&unk_41f8768, base, ptr);
  readData(&unk_720f501, base, ptr);
  readData(&unk_b0a7ee9, base, ptr);
  readData(&unk_756ebc1, base, ptr);
  readData(&unk_99e9721, base, ptr);
  readData(&unk_eb34eae, base, ptr);
  readData(&uVal, base, ptr);
  readData(&eBountyType, base, ptr);
  readData(&unk_cf9093b, base, ptr);
  readData(&gbidPetType, base, ptr);
  readData(&eGizmoType, base, ptr);
  readData(&tDateTime, base, ptr);
  readData(&uOperand, base, ptr);
}
