/**
 * Definition: taf0abce6
 * Hash: af0abce6
 */

#include "taf0abce6.h"

void taf0abce6::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&eCurrency, base, ptr);
  readData(&unk_6d39fa2, base, ptr);
  readData(&arValues, base, ptr);
  readData(&unk_6ae314e, base, ptr);
  readData(&unk_f61d7c3, base, ptr);
  readData(&unk_40ddaae, base, ptr);
}
