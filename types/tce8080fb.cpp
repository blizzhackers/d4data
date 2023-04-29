/**
 * Definition: tce8080fb
 * Hash: ce8080fb
 */

#include "tce8080fb.h"

void tce8080fb::read(const char* base, char* &ptr) {
  readData(&unk_20bda58, base, ptr);
  readData(&unk_fb42747, base, ptr);
  readData(&unk_70d0dc0, base, ptr);
  readData(&unk_ac84ca4, base, ptr);
  readData(&unk_b64cb67, base, ptr);
  readData(&unk_83131fe, base, ptr);
  readData(&unk_c82c39b, base, ptr);
  readData(&unk_f48a504, base, ptr);
  readData(&unk_cc84436, base, ptr);
  readData(&unk_f441be6, base, ptr);
  readData(&unk_542a67d, base, ptr);
  readData(&ptProxData, base, ptr);
  readData(&unk_604a84d, base, ptr);
  readData(&unk_2e9f0cb, base, ptr);
  readData(&unk_b15bdc1, base, ptr);
  readData(&unk_ebfdb39, base, ptr);
  readData(&unk_e4c00ff, base, ptr);
  readData(&unk_5100a84, base, ptr);
}
