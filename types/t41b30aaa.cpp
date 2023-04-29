/**
 * Definition: t41b30aaa
 * Hash: 41b30aaa
 */

#include "t41b30aaa.h"

void t41b30aaa::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
