/**
 * Definition: tb1cccfae
 * Hash: b1cccfae
 */

#include "tb1cccfae.h"

void tb1cccfae::read(const char* base, char* &ptr) {
  readData(&arCamps, base, ptr);
  readData(&arDungeons, base, ptr);
  readData(&unk_2431f29, base, ptr);
  readData(&unk_3d8089d, base, ptr);
  readData(&arWaypoints, base, ptr);
  readData(&arFogOfWar, base, ptr);
  readData(&unk_e89c432, base, ptr);
}
