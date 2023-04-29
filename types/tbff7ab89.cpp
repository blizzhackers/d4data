/**
 * Definition: tbff7ab89
 * Hash: bff7ab89
 */

#include "tbff7ab89.h"

void tbff7ab89::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_cf3ce, base, ptr);
  readData(&unk_bbc67ad, base, ptr);
  readData(&unk_3ef8e38, base, ptr);
  readData(&ptNextNode, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&szComment, base, ptr);
  readData(&snoSpeaker, base, ptr);
  readData(&eGender, base, ptr);
  readData(&ePlayerClass, base, ptr);
  readData(&unk_8ee998c, base, ptr);
  readData(&unk_2d60579, base, ptr);
}
