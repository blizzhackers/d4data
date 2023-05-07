/**
 * Definition: t150d0776
 * Hash: 150d0776
 */

#include "t150d0776.h"

void t150d0776::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoUI, base, current);
  current = ptr + 0x4;
  readData(&szCutoffWrite, base, current);
  current = ptr + 0x104;
  readData(&szScreenName, base, current);
  current = ptr + 0x204;
  readData(&eGroup, base, current);
  current = ptr + 0x208;
  readData(&eLayer, base, current);
  current = ptr + 0x20c;
  readData(&ePlatform, base, current);
  current = ptr + 0x210;
  readData(&snoWorld, base, current);
  current = ptr + 0x214;
  readData(&unk_f292059, base, current);
  current = ptr + 0x294;
  readData(&eBanner, base, current);
  current = ptr + 0x298;
  readData(&unk_b20011c, base, current);
  ptr += 0x29c;
}
