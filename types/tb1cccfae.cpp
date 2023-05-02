/**
 * Definition: tb1cccfae
 * Hash: b1cccfae
 */

#include "tb1cccfae.h"

void tb1cccfae::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arCamps, base, current);
  current = ptr + 0x10;
  readData(&arDungeons, base, current);
  current = ptr + 0x20;
  readData(&unk_2431f29, base, current);
  current = ptr + 0x30;
  readData(&unk_3d8089d, base, current);
  current = ptr + 0x40;
  readData(&arWaypoints, base, current);
  current = ptr + 0x50;
  readData(&arFogOfWar, base, current);
  current = ptr + 0x60;
  readData(&unk_e89c432, base, current);
  ptr += 0x150;
}
