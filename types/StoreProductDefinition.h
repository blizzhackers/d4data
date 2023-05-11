/**
 * Definition: StoreProductDefinition
 * Hash: c920c917
 */

#pragma once

#include "../types.h"
#include "CardArt.h"
#include "t619110a4.h"

#pragma push(pack, 1)

struct StoreProductDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StoreProduct>> unk_d0a3165;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StoreProduct>> unk_de90ee6;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StoreProduct>> unk_12a0e73;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StoreProduct>> unk_2dfab35;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StoreProduct>> unk_3b58fa6;
  DT_SNO<SnoGroup::StoreProduct> unk_c7fa9b8;
  DT_SNO<SnoGroup::Item> snoItemTransmog;
  DT_SNO<SnoGroup::Item> snoMount;
  DT_SNO<SnoGroup::Emote> snoEmote;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::Emblem> snoEmblem;
  DT_SNO<SnoGroup::Actor> snoHeadstone;
  DT_INT unk_e4265e4;
  DT_INT unk_54edf70;
  DT_VARIABLEARRAY<CardArt> arCardArtVariants;
  DT_UINT unk_7b588be;
  DT_UINT unk_a65c016;
  DT_UINT unk_9b75db9;
  DT_UINT hCategoryIcon;
  DT_UINT unk_eb16f59;
  DT_INT unk_9a0855f;
  DT_UINT unk_8c37b97;
  DT_INT unk_54578ff;
  DT_INT unk_5ff5733;
  DT_UINT unk_a26c284;
  DT_UINT unk_a08a2f4;
  DT_UINT unk_aa674fe;
  DT_INT unk_68af238;
  t619110a4 unk_7c0b75d;
  DT_FIXEDARRAY<DT_INT, 5> unk_e5d7f3;
  DT_UINT unk_3b60fa7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
