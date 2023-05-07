/**
 * Definition: CriteriaModifier
 * Hash: c1fa762
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CriteriaModifier : public ComplexRead {
  DT_ENUM<DT_INT> unk_43805b9;
  DT_ENUM<DT_INT> eOperandType;
  DT_SNO_NAME snoname;
  DT_ENUM<DT_INT> unk_33d39d0;
  DT_ENUM<DT_INT> eSlot;
  DT_ENUM<DT_INT> eCrafterType;
  DT_ENUM<DT_INT> eCCType;
  DT_UINT szName;
  DT_ENUM<DT_INT> eIQL;
  DT_ENUM<DT_INT> eMonsterRarity;
  DT_ENUM<DT_INT> eDamageType;
  DT_ENUM<DT_INT> unk_41f8768;
  DT_ENUM<DT_INT> unk_720f501;
  DT_ENUM<DT_INT> unk_b0a7ee9;
  DT_ENUM<DT_INT> eZone;
  DT_ENUM<DT_INT> unk_99e9721;
  DT_ENUM<DT_INT> unk_eb34eae;
  DT_UINT uVal;
  DT_ENUM<DT_INT> eBountyType;
  DT_ENUM<DT_INT> unk_cf9093b;
  DT_GBID<0x17> gbidPetType;
  DT_ENUM<DT_INT> eGizmoType;
  DT_INT64 tDateTime;
  DT_INT64 uOperand;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
