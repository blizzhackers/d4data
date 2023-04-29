/**
 * Definition: t994d5535
 * Hash: 994d5535
 */

#include "t994d5535.h"

void t994d5535::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_cf3ce, base, ptr);
  readData(&unk_bbc67ad, base, ptr);
  readData(&unk_3ef8e38, base, ptr);
  readData(&ptNextNode, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&szComment, base, ptr);
  readData(&arChildNodes, base, ptr);
  readData(&snoCondition, base, ptr);
  readData(&unk_d8bf9e4, base, ptr);
  readData(&snoSpeaker, base, ptr);
  readData(&unk_acdb8a3, base, ptr);
  readData(&unk_ecabee0, base, ptr);
  readData(&unk_2e54e3c, base, ptr);
  readData(&unk_bcac396, base, ptr);
  readData(&unk_8fd92f7, base, ptr);
  readData(&unk_8a48001, base, ptr);
  readData(&unk_aae0113, base, ptr);
  readData(&unk_f95422b, base, ptr);
  readData(&unk_8cbb06b, base, ptr);
  readData(&unk_5b42409, base, ptr);
  readData(&unk_b882e13, base, ptr);
  readData(&unk_748463e, base, ptr);
  readData(&unk_76d4bd, base, ptr);
}
