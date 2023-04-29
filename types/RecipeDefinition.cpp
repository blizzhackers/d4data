/**
 * Definition: RecipeDefinition
 * Hash: 991bc5e1
 */

#include "RecipeDefinition.h"

void RecipeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tSpecificItem, base, ptr);
  readData(&unk_e729dfb, base, ptr);
  readData(&unk_80fd44d, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&eCrafterType, base, ptr);
  readData(&unk_abc657f, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_2fa5b31, base, ptr);
  readData(&nCost, base, ptr);
  readData(&unk_3046a06, base, ptr);
  readData(&unk_86b80f6, base, ptr);
  readData(&arIngredients, base, ptr);
  readData(&unk_c05e260, base, ptr);
}
