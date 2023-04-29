/**
 * Definition: tdf1582ec
 * Hash: df1582ec
 */

#include "tdf1582ec.h"

void tdf1582ec::read(const char* base, char* &ptr) {
  readData(&unk_872c408, base, ptr);
  readData(&unk_fec1a8e, base, ptr);
  readData(&nUnlockLevel, base, ptr);
  readData(&unk_f508498, base, ptr);
}
