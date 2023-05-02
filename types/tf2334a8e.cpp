/**
 * Definition: tf2334a8e
 * Hash: f2334a8e
 */

#include "tf2334a8e.h"

void tf2334a8e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e1f84a7, base, current);
  current = ptr + 0x8;
  readData(&unk_18a0496, base, current);
  current = ptr + 0xc;
  readData(&unk_18a0398, base, current);
  current = ptr + 0x10;
  readData(&unk_5559079, base, current);
  current = ptr + 0x18;
  readData(&aPitchMin, base, current);
  current = ptr + 0x1c;
  readData(&aPitchMax, base, current);
  current = ptr + 0x20;
  readData(&unk_5d19a0, base, current);
  current = ptr + 0x28;
  readData(&aPitchOffset, base, current);
  current = ptr + 0x2c;
  readData(&aSpeed, base, current);
  current = ptr + 0x30;
  readData(&bYawOnly, base, current);
  current = ptr + 0x34;
  readData(&unk_e560406, base, current);
  current = ptr + 0x38;
  readData(&flDelay, base, current);
  ptr += 0x3c;
}
