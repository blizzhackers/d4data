/**
 * Definition: ExplosionDefinition
 * Hash: ef2ef3aa
 */

#include "ExplosionDefinition.h"

void ExplosionDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&eType, base, current);
  current = ptr + 0x10;
  readData(&wvDirection, base, current);
  current = ptr + 0x20;
  readData(&unk_d03716d, base, current);
  current = ptr + 0x58;
  readData(&pathRadius, base, current);
  current = ptr + 0x90;
  readData(&unk_bebfab2, base, current);
  current = ptr + 0x98;
  readData(&unk_6a15ca2, base, current);
  current = ptr + 0xa0;
  readData(&flCutoffRadius, base, current);
  current = ptr + 0xa4;
  readData(&unk_edb8832, base, current);
  current = ptr + 0xa8;
  readData(&unk_56d7ce2, base, current);
  current = ptr + 0xac;
  readData(&flDuration, base, current);
  current = ptr + 0xb0;
  readData(&flChance, base, current);
  current = ptr + 0xb4;
  readData(&flFrequency, base, current);
  current = ptr + 0xb8;
  readData(&unk_6b38232, base, current);
  current = ptr + 0xc4;
  readData(&unk_6b38134, base, current);
  current = ptr + 0xd0;
  readData(&unk_c5b3851, base, current);
  ptr += 0xd8;
}
