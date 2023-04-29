/**
 * Definition: t3ddf9693
 * Hash: 3ddf9693
 */

#include "t3ddf9693.h"

void t3ddf9693::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&szLookName, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_189be9b, base, ptr);
  readData(&unk_94a2b91, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&flWeight, base, ptr);
  readData(&unk_9396f37, base, ptr);
  readData(&unk_f116b76, base, ptr);
  readData(&unk_da5b372, base, ptr);
  readData(&unk_8dea4d9, base, ptr);
  readData(&nFadeGroup, base, ptr);
}
