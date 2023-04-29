/**
 * Definition: GeoSet
 * Hash: ad003c27
 */

#include "GeoSet.h"

void GeoSet::read(const char* base, char* &ptr) {
  readData(&ptSubObjects, base, ptr);
  readData(&unk_9d1d596, base, ptr);
  readData(&unk_79283f, base, ptr);
  readData(&unk_af1153d, base, ptr);
  readData(&unk_72aae9c, base, ptr);
}
