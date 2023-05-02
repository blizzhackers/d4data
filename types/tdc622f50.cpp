/**
 * Definition: tdc622f50
 * Hash: dc622f50
 */

#include "tdc622f50.h"

void tdc622f50::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHardpointLink, base, current);
  current = ptr + 0x8;
  readData(&vecOffset, base, current);
  current = ptr + 0x14;
  readData(&unk_d52bb88, base, current);
  ptr += 0x24;
}
