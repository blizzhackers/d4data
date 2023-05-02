/**
 * Definition: tc1ccb782
 * Hash: c1ccb782
 */

#include "tc1ccb782.h"

void tc1ccb782::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&szToolTip, base, current);
  current = ptr + 0x20;
  readData(&unk_8f42da5, base, current);
  current = ptr + 0x24;
  readData(&unk_8cb2061, base, current);
  current = ptr + 0x28;
  readData(&unk_c249c5f, base, current);
  current = ptr + 0x38;
  readData(&unk_83f3d3e, base, current);
  current = ptr + 0x3c;
  readData(&unk_58f8666, base, current);
  current = ptr + 0x40;
  readData(&unk_8f05a31, base, current);
  current = ptr + 0x44;
  readData(&unk_c62b399, base, current);
  current = ptr + 0x48;
  readData(&unk_fd60c8f, base, current);
  current = ptr + 0x4c;
  readData(&unk_8711100, base, current);
  current = ptr + 0x50;
  readData(&unk_d289db4, base, current);
  current = ptr + 0x54;
  readData(&unk_d8df50f, base, current);
  current = ptr + 0x58;
  readData(&unk_d6da84, base, current);
  ptr += 0x60;
}
