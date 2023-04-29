/**
 * Definition: t960ae6f1
 * Hash: 960ae6f1
 */

#include "t960ae6f1.h"

void t960ae6f1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_e4fae63, base, ptr);
  readData(&bSuccess, base, ptr);
}
