/**
 * Definition: SchedulerGlobalUniqueCategory
 * Hash: d2f29025
 */

#include "SchedulerGlobalUniqueCategory.h"

void SchedulerGlobalUniqueCategory::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
