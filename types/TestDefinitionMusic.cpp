/**
 * Definition: TestDefinitionMusic
 * Hash: f5b3e70a
 */

#include "TestDefinitionMusic.h"

void TestDefinitionMusic::read(const char* base, char* &ptr) {
  readData(&tName, base, ptr);
  readData(&flValue, base, ptr);
  readData(&flMin, base, ptr);
  readData(&flMax, base, ptr);
}
