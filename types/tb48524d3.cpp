/**
 * Definition: tb48524d3
 * Hash: b48524d3
 */

#include "tb48524d3.h"

void tb48524d3::read(const char* base, char* &ptr) {
  readData(&eAttribute, base, ptr);
  readData(&nParam, base, ptr);
  readData(&unk_5439402, base, ptr);
}
