/**
 * Definition: te17a1529
 * Hash: e17a1529
 */

#include "te17a1529.h"

void te17a1529::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  current = ptr + 0x20;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x24;
  readData(&unk_111c745, base, current);
  ptr += 0x28;
}
