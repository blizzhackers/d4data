/**
 * Definition: DynamicAudioState
 * Hash: fe1cc8d8
 */

#include "DynamicAudioState.h"

void DynamicAudioState::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6f68ae7, base, current);
  current = ptr + 0x8;
  readData(&unk_dc04935, base, current);
  current = ptr + 0x10;
  readData(&unk_ce3c7b4, base, current);
  ptr += 0x14;
}
