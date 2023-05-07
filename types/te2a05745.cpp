/**
 * Definition: te2a05745
 * Hash: e2a05745
 */

#include "te2a05745.h"

void te2a05745::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8700a4d, base, current);
  current = ptr + 0x4;
  readData(&unk_8700a4e, base, current);
  current = ptr + 0x8;
  readData(&dwSourceId, base, current);
  current = ptr + 0xc;
  readData(&dwDestinationId, base, current);
  current = ptr + 0x10;
  readData(&unk_4555763, base, current);
  ptr += 0x20;
}
