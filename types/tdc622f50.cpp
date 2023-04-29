/**
 * Definition: tdc622f50
 * Hash: dc622f50
 */

#include "tdc622f50.h"

void tdc622f50::read(const char* base, char* &ptr) {
  readData(&tHardpointLink, base, ptr);
  readData(&vecOffset, base, ptr);
  readData(&unk_d52bb88, base, ptr);
}
