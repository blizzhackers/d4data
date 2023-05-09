/**
 * Definition: MapPinMessage
 * Hash: 6e3bbfca
 */

#include "MapPinMessage.h"

void MapPinMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&vecPos, base, current);
  current = ptr + 0x20;
  readData(&unk_c819eef, base, current);
  current = ptr + 0x24;
  readData(&unk_3614bd3, base, current);
  ptr += 0x28;
}
