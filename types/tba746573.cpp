/**
 * Definition: tba746573
 * Hash: ba746573
 */

#include "tba746573.h"

void tba746573::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&tDuration, base, current);
  current = ptr + 0x4c;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x50;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x54;
  readData(&tCleanup, base, current);
  current = ptr + 0x6c;
  readData(&unk_49e9257, base, current);
  current = ptr + 0x70;
  readData(&unk_5490979, base, current);
  current = ptr + 0x74;
  readData(&dwPad, base, current);
  current = ptr + 0x78;
  readData(&unk_7902ee3, base, current);
  current = ptr + 0x7c;
  readData(&unk_25955c7, base, current);
  current = ptr + 0x80;
  readData(&unk_abee5c3, base, current);
  current = ptr + 0x84;
  readData(&unk_fbca868, base, current);
  current = ptr + 0x88;
  readData(&unk_839aa20, base, current);
  current = ptr + 0x8c;
  readData(&unk_f75b7db, base, current);
  current = ptr + 0x90;
  readData(&unk_e7f8ef9, base, current);
  current = ptr + 0x94;
  readData(&unk_600cf5, base, current);
  current = ptr + 0x98;
  readData(&unk_aa07da, base, current);
  current = ptr + 0x9c;
  readData(&unk_abbeed2, base, current);
  current = ptr + 0xa0;
  readData(&unk_b9bf10d, base, current);
  current = ptr + 0xa4;
  readData(&unk_991ae81, base, current);
  ptr += 0xa8;
}
