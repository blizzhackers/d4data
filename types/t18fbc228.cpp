/**
 * Definition: t18fbc228
 * Hash: 18fbc228
 */

#include "t18fbc228.h"

void t18fbc228::read(const char* base, char* &ptr) {
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
  readData(&dwObjectID, base, current);
  current = ptr + 0x4c;
  readData(&unk_bd1644f, base, current);
  current = ptr + 0x50;
  readData(&aThreshold, base, current);
  current = ptr + 0x54;
  readData(&unk_d74c75c, base, current);
  current = ptr + 0x58;
  readData(&unk_77ca12a, base, current);
  current = ptr + 0x5c;
  readData(&unk_23237e1, base, current);
  current = ptr + 0x60;
  readData(&unk_f1b6afc, base, current);
  ptr += 0x68;
}
