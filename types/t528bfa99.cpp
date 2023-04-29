/**
 * Definition: t528bfa99
 * Hash: 528bfa99
 */

#include "t528bfa99.h"

void t528bfa99::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_85269a4, base, ptr);
  readData(&unk_b9368ac, base, ptr);
  readData(&unk_f50537b, base, ptr);
  readData(&unk_6fd6f47, base, ptr);
  readData(&unk_f22bb26, base, ptr);
  readData(&unk_4102322, base, ptr);
  readData(&unk_9a2c9a0, base, ptr);
  readData(&unk_ab8c139, base, ptr);
  readData(&unk_9a91dcf, base, ptr);
  readData(&unk_edec5ed, base, ptr);
  readData(&unk_e312e34, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&dwID, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&tHardpointLinks, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&unk_b0f4eeb, base, ptr);
  readData(&transform, base, ptr);
  readData(&unk_315ce85, base, ptr);
  readData(&unk_760871b, base, ptr);
  readData(&vecScale, base, ptr);
  readData(&vecScalar, base, ptr);
  readData(&unk_30e0427, base, ptr);
  readData(&unk_2130773, base, ptr);
  readData(&unk_1149cd2, base, ptr);
  readData(&unk_10405ce, base, ptr);
  readData(&unk_96134cc, base, ptr);
  readData(&unk_498cae5, base, ptr);
  readData(&dwUniqueID, base, ptr);
}
