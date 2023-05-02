/**
 * Definition: tb3ff0077
 * Hash: b3ff0077
 */

#include "tb3ff0077.h"

void tb3ff0077::read(const char* base, char* &ptr) {
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
  readData(&unk_9058b77, base, current);
  current = ptr + 0x4c;
  readData(&vecPosition, base, current);
  current = ptr + 0x58;
  readData(&szText, base, current);
  ptr += 0x68;
}
