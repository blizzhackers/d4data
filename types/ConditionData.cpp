/**
 * Definition: ConditionData
 * Hash: 53b76221
 */

#include "ConditionData.h"

void ConditionData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x4;
  readData(&hConditionText, base, current);
  ptr += 0xc;
}
