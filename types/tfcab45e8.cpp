/**
 * Definition: tfcab45e8
 * Hash: fcab45e8
 */

#include "tfcab45e8.h"

void tfcab45e8::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7cb44e7, base, ptr);
  readData(&unk_b0a3524, base, ptr);
  readData(&unk_6a40877, base, ptr);
}
