/**
 * Definition: tfe55f29d
 * Hash: fe55f29d
 */

#include "tfe55f29d.h"

void tfe55f29d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPlayer, base, current);
  current = ptr + 0x18;
  readData(&flTetherRadius, base, current);
  current = ptr + 0x1c;
  readData(&wpTetherPoint, base, current);
  ptr += 0x30;
}
