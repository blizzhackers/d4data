/**
 * Definition: PowerFormulaTableEntry
 * Hash: d6d196dd
 */

#include "PowerFormulaTableEntry.h"

void PowerFormulaTableEntry::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&flValue, base, ptr);
}
