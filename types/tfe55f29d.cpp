/**
 * Definition: tfe55f29d
 * Hash: fe55f29d
 */

#include "tfe55f29d.h"

void tfe55f29d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPlayer, base, ptr);
  readData(&flTetherRadius, base, ptr);
  readData(&unk_beb141d, base, ptr);
}
