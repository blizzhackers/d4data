/**
 * Definition: t41e42840
 * Hash: 41e42840
 */

#include "t41e42840.h"

void t41e42840::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arQuests, base, ptr);
}
