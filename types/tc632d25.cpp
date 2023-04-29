/**
 * Definition: tc632d25
 * Hash: c632d25
 */

#include "tc632d25.h"

void tc632d25::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoPower, base, ptr);
}
