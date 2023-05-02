/**
 * Definition: RecipeIngredient
 * Hash: 515f8ac1
 */

#include "RecipeIngredient.h"

void RecipeIngredient::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x4;
  readData(&snoItem, base, current);
  current = ptr + 0x8;
  readData(&nQuantity, base, current);
  current = ptr + 0xc;
  readData(&unk_9912dc7, base, current);
  current = ptr + 0x10;
  readData(&unk_20e0a16, base, current);
  current = ptr + 0x14;
  readData(&unk_a6432a8, base, current);
  current = ptr + 0x1c;
  readData(&unk_86b80f6, base, current);
  ptr += 0x20;
}
