/**
 * Definition: LabelRuleSet
 * Hash: fe388804
 */

#include "LabelRuleSet.h"

void LabelRuleSet::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arRules, base, current);
  ptr += 0x10;
}
