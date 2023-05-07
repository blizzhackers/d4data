/**
 * Definition: tbff7ab89
 * Hash: bff7ab89
 */

#include "tbff7ab89.h"

void tbff7ab89::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_cf3ce, base, current);
  current = ptr + 0x14;
  readData(&unk_bbc67ad, base, current);
  current = ptr + 0x18;
  readData(&unk_3ef8e38, base, current);
  current = ptr + 0x20;
  readData(&ptNextNode, base, current);
  current = ptr + 0x28;
  readData(&dwFlags, base, current);
  current = ptr + 0x30;
  readData(&szComment, base, current);
  current = ptr + 0x40;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x44;
  readData(&eGender, base, current);
  current = ptr + 0x48;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x4c;
  readData(&tDisplayTimes, base, current);
  current = ptr + 0x344;
  readData(&unk_2d60579, base, current);
  ptr += 0x348;
}
