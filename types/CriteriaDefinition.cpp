/**
 * Definition: CriteriaDefinition
 * Hash: cca0949c
 */

#include "CriteriaDefinition.h"

void CriteriaDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uID, base, current);
  current = ptr + 0x8;
  readData(&unk_697fa81, base, current);
  current = ptr + 0x10;
  readData(&tStartEvent, base, current);
  current = ptr + 0x78;
  readData(&unk_6e292a8, base, current);
  current = ptr + 0xd8;
  readData(&unk_7756d52, base, current);
  current = ptr + 0x138;
  readData(&uFlags, base, current);
  ptr += 0x140;
}
