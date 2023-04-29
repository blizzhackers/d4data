/**
 * Definition: RecipeIngredient
 * Hash: 515f8ac1
 */

#include "RecipeIngredient.h"

void RecipeIngredient::read(const char* base, char* &ptr) {
  readData(&snoCondition, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&nQuantity, base, ptr);
  readData(&unk_9912dc7, base, ptr);
  readData(&unk_20e0a16, base, ptr);
  readData(&unk_a6432a8, base, ptr);
  readData(&unk_86b80f6, base, ptr);
}
