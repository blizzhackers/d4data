/**
 * Definition: ta6f0b816
 * Hash: a6f0b816
 */

#include "ta6f0b816.h"

void ta6f0b816::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&unk_adbc22e, base, current);
  current = ptr + 0x4c;
  readData(&dwActorID, base, current);
  current = ptr + 0x50;
  readData(&dwID, base, current);
  current = ptr + 0x54;
  readData(&unk_957fe32, base, current);
  current = ptr + 0x58;
  readData(&unk_733c15d, base, current);
  ptr += 0x68;
}
