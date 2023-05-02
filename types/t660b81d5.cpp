/**
 * Definition: t660b81d5
 * Hash: 660b81d5
 */

#include "t660b81d5.h"

void t660b81d5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4d5b938, base, current);
  current = ptr + 0x8;
  readData(&szOnChange, base, current);
  current = ptr + 0x18;
  readData(&bIMEDisabled, base, current);
  current = ptr + 0x1c;
  readData(&bNumbersOnly, base, current);
  current = ptr + 0x20;
  readData(&unk_1790e11, base, current);
  current = ptr + 0x28;
  readData(&szOnReturnEndEdit, base, current);
  current = ptr + 0x38;
  readData(&szOnGainedFocus, base, current);
  current = ptr + 0x48;
  readData(&szOnLostFocus, base, current);
  current = ptr + 0x58;
  readData(&unk_a9baaf6, base, current);
  current = ptr + 0x60;
  readData(&unk_d60a445, base, current);
  current = ptr + 0x64;
  readData(&unk_d57dba5, base, current);
  current = ptr + 0x68;
  readData(&unk_68feeeb, base, current);
  current = ptr + 0x70;
  readData(&unk_a4c0376, base, current);
  current = ptr + 0x80;
  readData(&unk_5b06d35, base, current);
  current = ptr + 0x88;
  readData(&unk_6877801, base, current);
  current = ptr + 0x8c;
  readData(&nNumDecimalPlaces, base, current);
  current = ptr + 0x90;
  readData(&bAcceptsReturn, base, current);
  current = ptr + 0x94;
  readData(&unk_75dc498, base, current);
  current = ptr + 0x98;
  readData(&unk_16b847e, base, current);
  current = ptr + 0xa0;
  readData(&unk_6240b01, base, current);
  ptr += 0xa8;
}
