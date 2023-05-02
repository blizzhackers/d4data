/**
 * Definition: NetAttributeKeyValue
 * Hash: cb7586c1
 */

#include "NetAttributeKeyValue.h"

void NetAttributeKeyValue::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nKeyParam, base, current);
  current = ptr + 0x8;
  readData(&eKeyAttrib, base, current);
  ptr += 0x10;
}
