/**
 * Definition: StringTableEntry
 * Hash: e5282031
 */

#include "StringTableEntry.h"

void StringTableEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szLabel, base, current);
  current = ptr + 0x10;
  readData(&szText, base, current);
  current = ptr + 0x20;
  readData(&hLabel, base, current);
  ptr += 0x28;
}
