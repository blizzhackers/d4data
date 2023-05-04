/**
 * Definition: Marker
 * Hash: bab8d922
 */

#include "Marker.h"

void Marker::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  current = ptr + 0x4;
  readData(&nID, base, current);
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0xc;
  readData(&transform, base, current);
  current = ptr + 0x28;
  readData(&snoname, base, current);
  current = ptr + 0x30;
  readData(&unk_3e7936a, base, current);
  current = ptr + 0x34;
  readData(&vecScale, base, current);
  current = ptr + 0x40;
  readData(&ptBase, base, current);
  current = ptr + 0x58;
  readData(&ptGroupData, base, current);
  current = ptr + 0x68;
  readData(&ptMarkerLinks, base, current);
  current = ptr + 0x78;
  readData(&unk_c339f69, base, current);
  current = ptr + 0x7c;
  readData(&dwSeed, base, current);
  current = ptr + 0x80;
  readData(&unk_bbfbbfe, base, current);
  ptr += 0xb0;
}
