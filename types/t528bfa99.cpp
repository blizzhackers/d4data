/**
 * Definition: t528bfa99
 * Hash: 528bfa99
 */

#include "t528bfa99.h"

void t528bfa99::read(const char* base, char* &ptr) {
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
  readData(&unk_85269a4, base, current);
  current = ptr + 0x4c;
  readData(&unk_b9368ac, base, current);
  current = ptr + 0x50;
  readData(&unk_f50537b, base, current);
  current = ptr + 0x54;
  readData(&unk_6fd6f47, base, current);
  current = ptr + 0x58;
  readData(&unk_f22bb26, base, current);
  current = ptr + 0x5c;
  readData(&unk_4102322, base, current);
  current = ptr + 0x60;
  readData(&unk_9a2c9a0, base, current);
  current = ptr + 0x64;
  readData(&unk_ab8c139, base, current);
  current = ptr + 0x68;
  readData(&unk_9a91dcf, base, current);
  current = ptr + 0x6c;
  readData(&unk_edec5ed, base, current);
  current = ptr + 0x70;
  readData(&unk_e312e34, base, current);
  current = ptr + 0x74;
  readData(&dwActorID, base, current);
  current = ptr + 0x78;
  readData(&dwID, base, current);
  current = ptr + 0x7c;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x80;
  readData(&tHardpointLinks, base, current);
  current = ptr + 0x90;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x94;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x98;
  readData(&unk_b0f4eeb, base, current);
  current = ptr + 0x9c;
  readData(&transform, base, current);
  current = ptr + 0xb8;
  readData(&unk_315ce85, base, current);
  current = ptr + 0xc0;
  readData(&unk_760871b, base, current);
  current = ptr + 0xc4;
  readData(&vecScale, base, current);
  current = ptr + 0xd0;
  readData(&vecScalar, base, current);
  current = ptr + 0xd8;
  readData(&unk_30e0427, base, current);
  current = ptr + 0xdc;
  readData(&unk_2130773, base, current);
  current = ptr + 0xe0;
  readData(&unk_1149cd2, base, current);
  current = ptr + 0xe4;
  readData(&unk_10405ce, base, current);
  current = ptr + 0xe8;
  readData(&unk_96134cc, base, current);
  current = ptr + 0xec;
  readData(&unk_498cae5, base, current);
  current = ptr + 0xf0;
  readData(&dwUniqueID, base, current);
  ptr += 0xf8;
}
