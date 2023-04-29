/**
 * Definition: ItemDefinition
 * Hash: b9e78bb8
 */

#include "ItemDefinition.h"

void ItemDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoActor, base, ptr);
  readData(&snoItemType, base, ptr);
  readData(&eMagicType, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_d645403, base, ptr);
  readData(&unk_a56b90b, base, ptr);
  readData(&dwComponentStyle, base, ptr);
  readData(&snoLore, base, ptr);
  readData(&nMaxStackSize, base, ptr);
  readData(&unk_d8f474d, base, ptr);
  readData(&unk_11efbc0, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&unk_e6a0bdf, base, ptr);
  readData(&unk_debbc21, base, ptr);
  readData(&unk_cb9e62d, base, ptr);
  readData(&unk_c3b966f, base, ptr);
  readData(&unk_8875e7a, base, ptr);
  readData(&unk_440d049, base, ptr);
  readData(&unk_8e8ea20, base, ptr);
  readData(&snoBaseItem, base, ptr);
  readData(&snoRandomItemTreasureClass, base, ptr);
  readData(&snoSalvageTreasureClassNormal, base, ptr);
  readData(&snoSalvageTreasureClassMagic, base, ptr);
  readData(&snoSalvageTreasureClassRare, base, ptr);
  readData(&snoSalvageTreasureClassLegendary, base, ptr);
  readData(&unk_13fbf8b, base, ptr);
  readData(&unk_af5e44f, base, ptr);
  readData(&snoRareNamePrefixStringList, base, ptr);
  readData(&snoRareNameSuffixStringList, base, ptr);
  readData(&snoSetItemBonus, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_da84fbb, base, ptr);
  readData(&unk_ba8730c, base, ptr);
  readData(&unk_ae0eeff, base, ptr);
  readData(&ptAttributes, base, ptr);
  readData(&unk_f7a4116, base, ptr);
  readData(&unk_143ea6c, base, ptr);
  readData(&unk_e6191d6, base, ptr);
  readData(&unk_192312c, base, ptr);
  readData(&unk_9da2273, base, ptr);
  readData(&ptSocketedEffects, base, ptr);
  readData(&unk_ab5ef77, base, ptr);
  readData(&snoRecipe, base, ptr);
  readData(&unk_cea72d2, base, ptr);
  readData(&snoMount, base, ptr);
  readData(&snoParagonGlyph, base, ptr);
  readData(&unk_3202773, base, ptr);
  readData(&arReputation, base, ptr);
  readData(&tInvImages, base, ptr);
  readData(&unk_75d565b, base, ptr);
  readData(&unk_954d4f9, base, ptr);
  readData(&fBottomless, base, ptr);
  readData(&eItemUseType, base, ptr);
  readData(&unk_db54dcf, base, ptr);
  readData(&unk_4bfa38e, base, ptr);
  readData(&eDisplayedQualityLevel, base, ptr);
  readData(&unk_4a49da6, base, ptr);
  readData(&snoPowerPassive, base, ptr);
  readData(&eGemType, base, ptr);
  readData(&snoPotionPower, base, ptr);
  readData(&unk_fbc4ae9, base, ptr);
}
