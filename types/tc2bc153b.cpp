/**
 * Definition: tc2bc153b
 * Hash: c2bc153b
 */

#include "tc2bc153b.h"

void tc2bc153b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&dwTypes, base, current);
  current = ptr + 0x108;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x10c;
  readData(&eDamageTypeOverride, base, current);
  current = ptr + 0x110;
  readData(&bIsPrimary, base, current);
  current = ptr + 0x114;
  readData(&unk_1baedbe, base, current);
  current = ptr + 0x128;
  readData(&unk_e9ab5ed, base, current);
  ptr += 0x13c;
}
