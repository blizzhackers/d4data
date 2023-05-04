/**
 * Definition: AttributeFormulaEntry
 * Hash: e64c779c
 */

#include "AttributeFormulaEntry.h"

void AttributeFormulaEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arRanges, base, current);
  ptr += 0x118;
}
