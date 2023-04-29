/**
 * Definition: t2641ffbb
 * Hash: 2641ffbb
 */

#include "t2641ffbb.h"

void t2641ffbb::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&ptInlineStyle, base, ptr);
  readData(&arChildren, base, ptr);
  readData(&unk_1cb, base, ptr);
}
