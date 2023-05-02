/**
 * Definition: HirelingSavedData
 * Hash: 9aad289f
 */

#include "HirelingSavedData.h"

void HirelingSavedData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHireling, base, current);
  current = ptr + 0x60;
  readData(&eActiveHireling, base, current);
  current = ptr + 0x64;
  readData(&dwAvailableHirelings, base, current);
  ptr += 0x68;
}
