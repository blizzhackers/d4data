/**
 * Definition: te67bed05
 * Hash: e67bed05
 */

#include "te67bed05.h"

void te67bed05::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_828d6cf, base, current);
  current = ptr + 0x14;
  readData(&unk_a7dff70, base, current);
  current = ptr + 0x18;
  readData(&flUTransInitial, base, current);
  current = ptr + 0x1c;
  readData(&unk_803e8a7, base, current);
  current = ptr + 0x24;
  readData(&flVTransInitial, base, current);
  current = ptr + 0x28;
  readData(&unk_42b1708, base, current);
  current = ptr + 0x30;
  readData(&ePinTranslation, base, current);
  current = ptr + 0x34;
  readData(&unk_4a1b252, base, current);
  current = ptr + 0x38;
  readData(&unk_96b1a52, base, current);
  current = ptr + 0x3c;
  readData(&unk_ec7cf93, base, current);
  current = ptr + 0x40;
  readData(&dwAnimFlags, base, current);
  current = ptr + 0x44;
  readData(&unk_e5b0c7f, base, current);
  current = ptr + 0x4c;
  readData(&fXOffset, base, current);
  current = ptr + 0x50;
  readData(&fYOffset, base, current);
  current = ptr + 0x54;
  readData(&unk_95a8bdb, base, current);
  current = ptr + 0x58;
  readData(&unk_85c824d, base, current);
  ptr += 0x60;
}
