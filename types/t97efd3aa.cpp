/**
 * Definition: t97efd3aa
 * Hash: 97efd3aa
 */

#include "t97efd3aa.h"

void t97efd3aa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ceba35b, base, ptr);
  readData(&unk_e92903, base, ptr);
  readData(&unk_86e0b08, base, ptr);
  readData(&unk_c803258, base, ptr);
  readData(&unk_3733127, base, ptr);
  readData(&unk_a47b076, base, ptr);
  readData(&unk_a884bb, base, ptr);
  readData(&unk_23aedc8, base, ptr);
  readData(&unk_478f948, base, ptr);
  readData(&unk_8589d1d, base, ptr);
  readData(&unk_8959e97, base, ptr);
}
