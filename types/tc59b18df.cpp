/**
 * Definition: tc59b18df
 * Hash: c59b18df
 */

#include "tc59b18df.h"

void tc59b18df::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&vote, base, ptr);
}
