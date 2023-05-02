/**
 * Definition: GeoSet
 * Hash: ad003c27
 */

#include "GeoSet.h"

void GeoSet::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptSubObjects, base, current);
  current = ptr + 0x10;
  readData(&unk_9d1d596, base, current);
  current = ptr + 0x20;
  readData(&unk_79283f, base, current);
  current = ptr + 0x24;
  readData(&unk_af1153d, base, current);
  current = ptr + 0x28;
  readData(&unk_72aae9c, base, current);
  ptr += 0x30;
}
