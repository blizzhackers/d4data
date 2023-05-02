/**
 * Definition: t2dfa004
 * Hash: 2dfa004
 */

#include "t2dfa004.h"

void t2dfa004::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&ptProxData, base, current);
  current = ptr + 0x28;
  readData(&snoAudioContext, base, current);
  current = ptr + 0x2c;
  readData(&unk_877fa6b, base, current);
  current = ptr + 0x30;
  readData(&fDisabled, base, current);
  current = ptr + 0x34;
  readData(&unk_80c961e, base, current);
  ptr += 0x38;
}
