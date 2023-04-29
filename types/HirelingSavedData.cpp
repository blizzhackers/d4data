/**
 * Definition: HirelingSavedData
 * Hash: 9aad289f
 */

#include "HirelingSavedData.h"

void HirelingSavedData::read(const char* base, char* &ptr) {
  readData(&tHireling, base, ptr);
  readData(&eActiveHireling, base, ptr);
  readData(&dwAvailableHirelings, base, ptr);
}
