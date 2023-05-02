/**
 * Definition: tf5b98542
 * Hash: f5b98542
 */

#include "tf5b98542.h"

void tf5b98542::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&flChance, base, current);
  current = ptr + 0x108;
  readData(&unk_b28752e, base, current);
  current = ptr + 0x118;
  readData(&unk_6c70b7e, base, current);
  current = ptr + 0x11c;
  readData(&unk_69022, base, current);
  current = ptr + 0x120;
  readData(&unk_e04d458, base, current);
  ptr += 0x128;
}
