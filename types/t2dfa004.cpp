/**
 * Definition: t2dfa004
 * Hash: 2dfa004
 */

#include "t2dfa004.h"

void t2dfa004::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&ptProxData, base, ptr);
  readData(&snoAudioContext, base, ptr);
  readData(&unk_877fa6b, base, ptr);
  readData(&fDisabled, base, ptr);
  readData(&unk_80c961e, base, ptr);
}
