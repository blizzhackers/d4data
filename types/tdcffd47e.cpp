/**
 * Definition: tdcffd47e
 * Hash: dcffd47e
 */

#include "tdcffd47e.h"

void tdcffd47e::read(const char* base, char* &ptr) {
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
  readData(&dwObjectID, base, current);
  current = ptr + 0x7c;
  readData(&unk_17909b9, base, current);
  current = ptr + 0x80;
  readData(&unk_a1d7e72, base, current);
  current = ptr + 0x88;
  readData(&unk_bd1644f, base, current);
  current = ptr + 0x8c;
  readData(&unk_5b85276, base, current);
  current = ptr + 0x90;
  readData(&unk_daebe18, base, current);
  current = ptr + 0x94;
  readData(&unk_6101673, base, current);
  current = ptr + 0x98;
  readData(&unk_8470ffc, base, current);
  current = ptr + 0xa0;
  readData(&unk_46c8459, base, current);
  current = ptr + 0xa4;
  readData(&unk_991ae81, base, current);
  current = ptr + 0xa8;
  readData(&unk_ff8fce8, base, current);
  current = ptr + 0xac;
  readData(&unk_3c71266, base, current);
  current = ptr + 0xb0;
  readData(&unk_c751343, base, current);
  current = ptr + 0xb4;
  readData(&unk_23237e1, base, current);
  current = ptr + 0xb8;
  readData(&unk_f1b6afc, base, current);
  ptr += 0xc0;
}
