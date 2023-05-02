/**
 * Definition: AttributeSpecifier
 * Hash: bfd1afce
 */

#include "AttributeSpecifier.h"

void AttributeSpecifier::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eAttribute, base, current);
  current = ptr + 0x4;
  readData(&nParam, base, current);
  current = ptr + 0x8;
  readData(&szAttributeFormula, base, current);
  current = ptr + 0x28;
  readData(&gbidFormula, base, current);
  current = ptr + 0x30;
  readData(&unk_dffdf28, base, current);
  ptr += 0x50;
}
