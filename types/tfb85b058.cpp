/**
 * Definition: tfb85b058
 * Hash: fb85b058
 */

#include "tfb85b058.h"

void tfb85b058::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_226a57b, base, ptr);
}
