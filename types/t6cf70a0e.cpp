/**
 * Definition: t6cf70a0e
 * Hash: 6cf70a0e
 */

#include "t6cf70a0e.h"

void t6cf70a0e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpPosition, base, current);
  current = ptr + 0xc;
  readData(&uEntranceGUID, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x18;
  readData(&unk_38c174, base, current);
  current = ptr + 0x1c;
  readData(&unk_ba8fd29, base, current);
  current = ptr + 0x20;
  readData(&unk_e5c224a, base, current);
  current = ptr + 0x24;
  readData(&hMinimapIcon, base, current);
  ptr += 0x28;
}
