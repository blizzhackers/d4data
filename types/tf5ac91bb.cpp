/**
 * Definition: tf5ac91bb
 * Hash: f5ac91bb
 */

#include "tf5ac91bb.h"

void tf5ac91bb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&data1, base, current);
  current = ptr + 0x8;
  readData(&data2, base, current);
  ptr += 0x10;
}
