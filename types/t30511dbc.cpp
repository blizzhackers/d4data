/**
 * Definition: t30511dbc
 * Hash: 30511dbc
 */

#include "t30511dbc.h"

void t30511dbc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFormulaHash, base, current);
  current = ptr + 0x4;
  readData(&unk_4049b3e, base, current);
  ptr += 0x8;
}
