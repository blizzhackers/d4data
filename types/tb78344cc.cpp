/**
 * Definition: tb78344cc
 * Hash: b78344cc
 */

#include "tb78344cc.h"

void tb78344cc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_eddc1bd, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&unk_8818621, base, ptr);
  readData(&bStartImmediately, base, ptr);
  readData(&unk_fe671fb, base, ptr);
}
