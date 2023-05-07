/**
 * Definition: teb8eea32
 * Hash: eb8eea32
 */

#include "teb8eea32.h"

void teb8eea32::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoMonsterFamily, base, current);
  current = ptr + 0x1c;
  readData(&szArchetype, base, current);
  current = ptr + 0x20;
  readData(&unk_f2a10c4, base, current);
  current = ptr + 0x24;
  readData(&eOptionalRarity, base, current);
  ptr += 0x28;
}
