/**
 * Definition: LabelRuleSet
 * Hash: fe388804
 */

#include "LabelRuleSet.h"

void LabelRuleSet::read(const char* base, char* &ptr) {
  readData(&arRules, base, ptr);
}
