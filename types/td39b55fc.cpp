/**
 * Definition: td39b55fc
 * Hash: d39b55fc
 */

#include "td39b55fc.h"

void td39b55fc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eFilterInequality, base, ptr);
  readData(&unk_6ebd86, base, ptr);
}
