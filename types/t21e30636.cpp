/**
 * Definition: t21e30636
 * Hash: 21e30636
 */

#include "t21e30636.h"

void t21e30636::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_85269a4, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&snoname, base, ptr);
  readData(&dwID, base, ptr);
  readData(&tHardpointLinks, base, ptr);
  readData(&unk_e7c25e0, base, ptr);
  readData(&unk_760871b, base, ptr);
  readData(&unk_beaacd1, base, ptr);
  readData(&unk_af58166, base, ptr);
  readData(&unk_3ed00d7, base, ptr);
  readData(&dwSeed, base, ptr);
  readData(&fBillboard, base, ptr);
  readData(&eAddType, base, ptr);
  readData(&unk_fbdc534, base, ptr);
  readData(&unk_f8b13e0, base, ptr);
  readData(&unk_fcc32b8, base, ptr);
  readData(&unk_773852b, base, ptr);
  readData(&unk_62ab747, base, ptr);
  readData(&unk_83bdc8f, base, ptr);
  readData(&unk_944e28b, base, ptr);
  readData(&unk_1426000, base, ptr);
  readData(&unk_24f5a5c, base, ptr);
  readData(&tLookLink, base, ptr);
  readData(&unk_48fd494, base, ptr);
  readData(&unk_6b8bffc, base, ptr);
  readData(&unk_e1f5441, base, ptr);
  readData(&unk_9967c81, base, ptr);
  readData(&unk_61399d, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&nLocalPlayerIndex, base, ptr);
  readData(&flScale, base, ptr);
  readData(&unk_b0f4eeb, base, ptr);
  readData(&vecScalar, base, ptr);
  readData(&transform, base, ptr);
  readData(&unk_315ce85, base, ptr);
  readData(&unk_c7fa18a, base, ptr);
  readData(&idRActorAttachment, base, ptr);
  readData(&nPermIndex, base, ptr);
  readData(&unk_c90434d, base, ptr);
  readData(&unk_33e4eec, base, ptr);
  readData(&unk_e0d3870, base, ptr);
  readData(&unk_a45e6bd, base, ptr);
  readData(&unk_36bc3de, base, ptr);
  readData(&nPriority, base, ptr);
  readData(&unk_245c537, base, ptr);
  readData(&unk_a03b96b, base, ptr);
}
