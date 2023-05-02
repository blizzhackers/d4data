/**
 * Definition: RecipeDefinition
 * Hash: 991bc5e1
 */

#include "RecipeDefinition.h"

void RecipeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tSpecificItem, base, current);
  current = ptr + 0x2c;
  readData(&unk_e729dfb, base, current);
  current = ptr + 0x30;
  readData(&unk_80fd44d, base, current);
  current = ptr + 0x38;
  readData(&snoItem, base, current);
  current = ptr + 0x3c;
  readData(&eCrafterType, base, current);
  current = ptr + 0x40;
  readData(&unk_abc657f, base, current);
  current = ptr + 0x44;
  readData(&dwFlags, base, current);
  current = ptr + 0x48;
  readData(&unk_2fa5b31, base, current);
  current = ptr + 0x4c;
  readData(&nCost, base, current);
  current = ptr + 0x50;
  readData(&unk_3046a06, base, current);
  current = ptr + 0x54;
  readData(&unk_86b80f6, base, current);
  current = ptr + 0x58;
  readData(&arIngredients, base, current);
  current = ptr + 0x68;
  readData(&unk_c05e260, base, current);
  ptr += 0x78;
}
