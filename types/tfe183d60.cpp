/**
 * Definition: tfe183d60
 * Hash: fe183d60
 */

#include "tfe183d60.h"

void tfe183d60::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_651223, base, current);
  current = ptr + 0x4;
  readData(&unk_651224, base, current);
  current = ptr + 0x8;
  readData(&unk_651225, base, current);
  current = ptr + 0xc;
  readData(&unk_651226, base, current);
  current = ptr + 0x10;
  readData(&unk_651227, base, current);
  current = ptr + 0x14;
  readData(&unk_651228, base, current);
  current = ptr + 0x18;
  readData(&unk_bd37344, base, current);
  current = ptr + 0x1c;
  readData(&unk_bd37345, base, current);
  current = ptr + 0x20;
  readData(&nWalking_Rate, base, current);
  current = ptr + 0x24;
  readData(&unk_bd37347, base, current);
  current = ptr + 0x28;
  readData(&unk_bd37348, base, current);
  current = ptr + 0x2c;
  readData(&unk_bd37349, base, current);
  ptr += 0x30;
}
