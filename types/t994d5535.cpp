/**
 * Definition: t994d5535
 * Hash: 994d5535
 */

#include "t994d5535.h"

void t994d5535::read(const char* base, char* &ptr) {
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
  readData(&arChildNodes, base, current);
  current = ptr + 0x58;
  readData(&snoCondition, base, current);
  current = ptr + 0x5c;
  readData(&unk_d8bf9e4, base, current);
  current = ptr + 0x60;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x64;
  readData(&unk_acdb8a3, base, current);
  current = ptr + 0x68;
  readData(&unk_ecabee0, base, current);
  current = ptr + 0x6c;
  readData(&unk_2e54e3c, base, current);
  current = ptr + 0x70;
  readData(&unk_bcac396, base, current);
  current = ptr + 0x78;
  readData(&unk_8fd92f7, base, current);
  current = ptr + 0x80;
  readData(&arListenerReactions, base, current);
  current = ptr + 0x90;
  readData(&unk_aae0113, base, current);
  current = ptr + 0xa0;
  readData(&unk_f95422b, base, current);
  current = ptr + 0xb0;
  readData(&unk_8cbb06b, base, current);
  current = ptr + 0xb8;
  readData(&unk_5b42409, base, current);
  current = ptr + 0xc0;
  readData(&unk_b882e13, base, current);
  current = ptr + 0xc4;
  readData(&unk_748463e, base, current);
  current = ptr + 0xc8;
  readData(&unk_76d4bd, base, current);
  ptr += 0xd0;
}
