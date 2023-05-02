/**
 * Definition: HelpCode
 * Hash: d53c56a4
 */

#include "HelpCode.h"

void HelpCode::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&unk_d35e7ff, base, current);
  current = ptr + 0x108;
  readData(&unk_e5a1921, base, current);
  current = ptr + 0x10c;
  readData(&szCommand, base, current);
  ptr += 0x50c;
}
