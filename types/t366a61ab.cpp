/**
 * Definition: t366a61ab
 * Hash: 366a61ab
 */

#include "t366a61ab.h"

void t366a61ab::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_1bdcc9f, base, ptr);
  readData(&unk_b0fd968, base, ptr);
  readData(&uFlags, base, ptr);
}
