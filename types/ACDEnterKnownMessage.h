/**
 * Definition: ACDEnterKnownMessage
 * Hash: 10abb2f8
 */

#pragma once

#include "../types.h"
#include "EnterKnownLookOverrides.h"
#include "InventoryLocationMessageData.h"
#include "RequiredMessageHeader.h"
#include "WorldLocationMessageData.h"
#include "t37cff633.h"
#include "ta9417475.h"

#pragma push(pack, 1)

struct ACDEnterKnownMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eLocationType;
  DT_OPTIONAL<DT_INT> tWorldLocationData;
  DT_OPTIONAL<DT_INT> tInvLocationData;
  DT_SNO_NAME unk_aa2bbb9;
  DT_OPTIONAL<DT_INT> nMonsterRarity;
  DT_OPTIONAL<DT_INT> nItemQuality;
  DT_OPTIONAL<DT_INT> unk_b3671d5;
  DT_UINT dwLookHash;
  DT_UINT unk_6c0cb90;
  DT_OPTIONAL<DT_INT> snoMarkerSet;
  DT_OPTIONAL<DT_INT> unk_9cc41dd;
  DT_OPTIONAL<DT_INT> unk_a2758c2;
  DT_OPTIONAL<DT_INT> unk_7a55b3f;
  DT_OPTIONAL<DT_INT> unk_7d23397;
  DT_OPTIONAL<DT_INT> unk_3125d0e;
  DT_OPTIONAL<DT_INT> snoAmbientOcclusionOverrideTex;
  DT_OPTIONAL<DT_INT> dwTimeActorCreated;
  DT_OPTIONAL<DT_INT> tEnterKnownLookOverrides;
  DT_OPTIONAL<DT_INT> unk_c76aca7;
  DT_OPTIONAL<DT_INT> uGizmoHash;
  DT_OPTIONAL<DT_INT> unk_9e938b5;
  DT_OPTIONAL<DT_INT> unk_f370a80;
  DT_OPTIONAL<DT_INT> unk_b192047;
  DT_OPTIONAL<DT_INT> unk_9d57e62;
  DT_OPTIONAL<DT_INT> unk_3475ed9;
  DT_OPTIONAL<DT_INT> unk_3929c26;
  DT_FIXEDARRAY<ta9417475, 4> unk_f5f15cc;
  DT_FIXEDARRAY<ta9417475, 4> unk_310a730;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
