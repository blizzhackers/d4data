/**
 * Definition: ConditionWrapper
 * Hash: df12c188
 */

#include "ConditionWrapper.h"

void ConditionWrapper::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&ptInlineCondition, base, current);
  ptr += 0x20;
}
