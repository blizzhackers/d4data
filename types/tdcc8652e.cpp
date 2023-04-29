/**
 * Definition: tdcc8652e
 * Hash: dcc8652e
 */

#include "tdcc8652e.h"

void tdcc8652e::read(const char* base, char* &ptr) {
  readData(&eAttribute, base, ptr);
  readData(&nParam, base, ptr);
}
