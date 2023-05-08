/**
 * Definition: SubzoneTypeSubcondition
 * Hash: da2f1fb9
 */

#include "SubzoneTypeSubcondition.h"

void SubzoneTypeSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eType, base, current);
  current = ptr + 0x1c;
  readData(&unk_d447cfd, base, current);
  ptr += 0x20;
}
