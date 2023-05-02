/**
 * Definition: TestDefinitionMusic
 * Hash: f5b3e70a
 */

#include "TestDefinitionMusic.h"

void TestDefinitionMusic::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tName, base, current);
  current = ptr + 0x4;
  readData(&flValue, base, current);
  current = ptr + 0x8;
  readData(&flMin, base, current);
  current = ptr + 0xc;
  readData(&flMax, base, current);
  ptr += 0x10;
}
