/**
 * Definition: t41b30aab
 * Hash: 41b30aab
 */

#include "t41b30aab.h"

void t41b30aab::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
