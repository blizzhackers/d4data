/**
 * Definition: SoundDefinition
 * Hash: cd43a1d2
 */

#include "SoundDefinition.h"

void SoundDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&tSoundPlayHistory, base, current);
  current = ptr + 0x24;
  readData(&unk_4a3e716, base, current);
  current = ptr + 0x28;
  readData(&unk_3b6cc35, base, current);
  current = ptr + 0x2c;
  readData(&unk_fec55de, base, current);
  current = ptr + 0x30;
  readData(&unk_ecacdd7, base, current);
  current = ptr + 0x34;
  readData(&flMaxRange, base, current);
  current = ptr + 0x38;
  readData(&unk_5757423, base, current);
  current = ptr + 0x48;
  readData(&unk_9c9c95f, base, current);
  current = ptr + 0x4c;
  readData(&unk_d17a11d, base, current);
  current = ptr + 0x50;
  readData(&unk_dc0bc5b, base, current);
  current = ptr + 0x54;
  readData(&unk_7c7f1a2, base, current);
  current = ptr + 0x58;
  readData(&flDopplerFactor, base, current);
  current = ptr + 0x5c;
  readData(&unk_f056ee9, base, current);
  current = ptr + 0x60;
  readData(&unk_f056deb, base, current);
  ptr += 0x68;
}
