/**
 * Definition: te3f28f16
 * Hash: e3f28f16
 */

#include "te3f28f16.h"

void te3f28f16::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eDamageType, base, current);
  current = ptr + 0x8;
  readData(&tDamage, base, current);
  current = ptr + 0x50;
  readData(&unk_89dc285, base, current);
  current = ptr + 0x54;
  readData(&unk_6331bb5, base, current);
  current = ptr + 0x58;
  readData(&unk_f551941, base, current);
  current = ptr + 0x5c;
  readData(&unk_dd4b5bf, base, current);
  current = ptr + 0x60;
  readData(&unk_3d768b7, base, current);
  current = ptr + 0x64;
  readData(&unk_b8f2b, base, current);
  current = ptr + 0x68;
  readData(&unk_79ce2e1, base, current);
  current = ptr + 0x70;
  readData(&tCombatEffectOverride, base, current);
  current = ptr + 0x90;
  readData(&unk_693b6db, base, current);
  current = ptr + 0x94;
  readData(&unk_d50fe6e, base, current);
  ptr += 0x98;
}
