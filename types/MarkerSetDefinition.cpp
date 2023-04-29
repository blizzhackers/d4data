/**
 * Definition: MarkerSetDefinition
 * Hash: f3f8f857
 */

#include "MarkerSetDefinition.h"

void MarkerSetDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tMarkerSet, base, ptr);
  readData(&dwMarkerSetFlags, base, ptr);
  readData(&nLabel, base, ptr);
  readData(&unk_677237e, base, ptr);
  readData(&unk_6d7f2e9, base, ptr);
  readData(&unk_db67c2c, base, ptr);
  readData(&ptChunks, base, ptr);
  readData(&unk_a3613db, base, ptr);
  readData(&unk_6458d11, base, ptr);
  readData(&unk_2bbd1d, base, ptr);
  readData(&unk_69b6741, base, ptr);
  readData(&unk_2f217b0, base, ptr);
  readData(&unk_d0a9662, base, ptr);
}
