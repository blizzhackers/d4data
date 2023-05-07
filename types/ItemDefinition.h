/**
 * Definition: ItemDefinition
 * Hash: b9e78bb8
 */

#pragma once

#include "../types.h"
#include "AttributeSpecifier.h"
#include "InventoryImages.h"
#include "SocketedEffects.h"
#include "tab2d8e94.h"

#pragma push(pack, 1)

struct ItemDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_SNO<SnoGroup::ItemType> snoItemType;
  DT_ENUM<DT_INT> eMagicType;
  DT_UINT dwFlags;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Dye>> unk_d645403;
  DT_ENUM<DT_INT> unk_a56b90b;
  DT_UINT dwComponentStyle;
  DT_SNO<SnoGroup::Lore> snoLore;
  DT_INT nMaxStackSize;
  DT_INT unk_d8f474d;
  DT_INT unk_11efbc0;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT unk_e6a0bdf;
  DT_INT unk_debbc21;
  DT_INT unk_cb9e62d;
  DT_INT unk_c3b966f;
  DT_ENUM<DT_INT> unk_8875e7a;
  DT_INT unk_440d049;
  DT_ENUM<DT_INT> ePreferredZone;
  DT_SNO<SnoGroup::Item> snoBaseItem;
  DT_SNO<SnoGroup::TreasureClass> snoRandomItemTreasureClass;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassNormal;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassMagic;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassRare;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassLegendary;
  DT_SNO<SnoGroup::TreasureClass> unk_13fbf8b;
  DT_SNO<SnoGroup::TreasureClass> unk_af5e44f;
  DT_SNO<SnoGroup::StringList> snoRareNamePrefixStringList;
  DT_SNO<SnoGroup::StringList> snoRareNameSuffixStringList;
  DT_SNO<SnoGroup::SetItemBonus> snoSetItemBonus;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT unk_da84fbb;
  DT_INT unk_ba8730c;
  DT_ENUM<DT_INT> unk_ae0eeff;
  DT_VARIABLEARRAY<AttributeSpecifier> ptAttributes;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Affix>> unk_f7a4116;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Affix>> unk_143ea6c;
  DT_VARIABLEARRAY<DT_GBID<0x12>> unk_e6191d6;
  DT_VARIABLEARRAY<DT_GBID<0x12>> unk_192312c;
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_VARIABLEARRAY<SocketedEffects> ptSocketedEffects;
  DT_SNO<SnoGroup::Power> unk_ab5ef77;
  DT_SNO<SnoGroup::Recipe> snoRecipe;
  DT_SNO<SnoGroup::DemonScroll> snoDemonScroll;
  DT_SNO<SnoGroup::Actor> snoMount;
  DT_SNO<SnoGroup::ParagonGlyph> snoParagonGlyph;
  DT_VARIABLEARRAY<DT_GBID<0x12>> unk_3202773;
  DT_VARIABLEARRAY<tab2d8e94> arReputation;
  DT_FIXEDARRAY<InventoryImages, 5> tInvImages;
  DT_UINT unk_75d565b;
  DT_INT unk_954d4f9;
  DT_INT fBottomless;
  DT_ENUM<DT_INT> eItemUseType;
  DT_SNO<SnoGroup::Power> unk_db54dcf;
  DT_SNO<SnoGroup::LevelArea> unk_4bfa38e;
  DT_ENUM<DT_INT> eDisplayedQualityLevel;
  DT_INT unk_4a49da6;
  DT_SNO<SnoGroup::Power> snoPowerPassive;
  DT_ENUM<DT_INT> eGemType;
  DT_SNO<SnoGroup::Power> snoPotionPower;
  DT_INT unk_fbc4ae9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
