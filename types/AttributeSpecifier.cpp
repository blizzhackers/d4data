/**
 * Definition: AttributeSpecifier
 * Hash: bfd1afce
 */

#include "AttributeSpecifier.h"

void AttributeSpecifier::read(const char* base, char* &ptr) {
  readData(&eAttribute, base, ptr);
  readData(&nParam, base, ptr);
  readData(&szAttributeFormula, base, ptr);
  readData(&gbidFormula, base, ptr);
  readData(&unk_dffdf28, base, ptr);
}
