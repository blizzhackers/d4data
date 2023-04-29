/**
 * Definition: tf7485455
 * Hash: f7485455
 */

#include "tf7485455.h"

void tf7485455::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
