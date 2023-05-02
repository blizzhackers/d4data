/**
 * Definition: tfbb7557a
 * Hash: fbb7557a
 */

#include "tfbb7557a.h"

void tfbb7557a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_fc859da, base, current);
  current = ptr + 0x4;
  readData(&dwPlaylistIndex, base, current);
  ptr += 0x8;
}
