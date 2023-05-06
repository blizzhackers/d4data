/**
 * Definition: GizmoConditionData
 * Hash: 9ecf50e7
 */

#include "GizmoConditionData.h"

void GizmoConditionData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoGizmoCondition, base, current);
  ptr += 0x4;
}
