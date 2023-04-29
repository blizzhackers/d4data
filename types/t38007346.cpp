/**
 * Definition: t38007346
 * Hash: 38007346
 */

#include "t38007346.h"

void t38007346::read(const char* base, char* &ptr) {
  readData(&eScalarFunction, base, ptr);
  readData(&unk_bde3eaf, base, ptr);
  readData(&uID, base, ptr);
  readData(&uNameHash, base, ptr);
  readData(&fBypass, base, ptr);
}
