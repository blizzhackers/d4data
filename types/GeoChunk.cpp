/**
 * Definition: GeoChunk
 * Hash: ece011d4
 */

#include "GeoChunk.h"

void GeoChunk::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&aabbBounds, base, current);
  current = ptr + 0x18;
  readData(&unk_d9fe6f6, base, current);
  current = ptr + 0x28;
  readData(&unk_4137988, base, current);
  current = ptr + 0x38;
  readData(&unk_7ef82a3, base, current);
  current = ptr + 0x48;
  readData(&unk_8c8b576, base, current);
  current = ptr + 0x58;
  readData(&ibid, base, current);
  ptr += 0x60;
}
