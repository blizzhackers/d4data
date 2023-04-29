/**
 * Definition: StringTableEntry
 * Hash: e5282031
 */

#include "StringTableEntry.h"

void StringTableEntry::read(const char* base, char* &ptr) {
  readData(&szLabel, base, ptr);
  readData(&szText, base, ptr);
  readData(&hLabel, base, ptr);
}
