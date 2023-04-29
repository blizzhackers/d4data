/**
 * Definition: NetAttributeKeyValue
 * Hash: cb7586c1
 */

#include "NetAttributeKeyValue.h"

void NetAttributeKeyValue::read(const char* base, char* &ptr) {
  readData(&nKeyParam, base, ptr);
  readData(&eKeyAttrib, base, ptr);
}
