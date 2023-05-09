/**
 * Definition: EnterWorldPlayer
 * Hash: db797d73
 */

#include "EnterWorldPlayer.h"

void EnterWorldPlayer::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpLocation, base, current);
  current = ptr + 0xc;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x10;
  readData(&tEnterKnownLookOverrides, base, current);
  current = ptr + 0x44;
  readData(&unk_c76aca7, base, current);
  ptr += 0x60;
}
