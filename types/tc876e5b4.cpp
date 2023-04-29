/**
 * Definition: tc876e5b4
 * Hash: c876e5b4
 */

#include "tc876e5b4.h"

void tc876e5b4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5c79d9e, base, ptr);
  readData(&unk_a1d7e72, base, ptr);
  readData(&dwObjectID, base, ptr);
  readData(&tHardpointLink, base, ptr);
  readData(&unk_896cea7, base, ptr);
  readData(&unk_454a2a1, base, ptr);
  readData(&unk_991ae81, base, ptr);
  readData(&unk_10734fd, base, ptr);
}
