/**
 * Definition: PowerFormulaTableEntry
 * Hash: d6d196dd
 */

#include "PowerFormulaTableEntry.h"

void PowerFormulaTableEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x400;
  readData(&flValue, base, current);
  ptr += 0x530;
}
