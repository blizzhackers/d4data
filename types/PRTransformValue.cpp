/**
 * Definition: PRTransformValue
 * Hash: b7ca8d5b
 */

#include "PRTransformValue.h"

void PRTransformValue::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&bEnabled, base, current);
  ptr += 0x1c;
}
