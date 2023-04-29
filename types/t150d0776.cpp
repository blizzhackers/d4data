/**
 * Definition: t150d0776
 * Hash: 150d0776
 */

#include "t150d0776.h"

void t150d0776::read(const char* base, char* &ptr) {
  readData(&snoUI, base, ptr);
  readData(&unk_4bb155f, base, ptr);
  readData(&szScreenName, base, ptr);
  readData(&eGroup, base, ptr);
  readData(&eLayer, base, ptr);
  readData(&ePlatform, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_f292059, base, ptr);
  readData(&eBanner, base, ptr);
  readData(&unk_b20011c, base, ptr);
}
