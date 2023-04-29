/**
 * Definition: tcf467c45
 * Hash: cf467c45
 */

#include "tcf467c45.h"

void tcf467c45::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eAttribute, base, ptr);
  readData(&flValue, base, ptr);
  readData(&nParam, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
