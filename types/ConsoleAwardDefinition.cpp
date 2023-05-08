/**
 * Definition: ConsoleAwardDefinition
 * Hash: fc6882b
 */

#include "ConsoleAwardDefinition.h"

void ConsoleAwardDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&uProfileAwardId, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
