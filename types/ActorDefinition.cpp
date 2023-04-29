/**
 * Definition: ActorDefinition
 * Hash: b7e17422
 */

#include "ActorDefinition.h"

void ActorDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eType, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&dwFlagsEx, base, ptr);
  readData(&snoAppearance, base, ptr);
  readData(&unk_ecc360f, base, ptr);
  readData(&unk_479d177, base, ptr);
  readData(&snoAnimTree, base, ptr);
  readData(&unk_db10329, base, ptr);
  readData(&eVariantType, base, ptr);
  readData(&unk_441fd2e, base, ptr);
  readData(&unk_3d234d5, base, ptr);
  readData(&unk_9ae2069, base, ptr);
  readData(&wcylBounds, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&wsBounds, base, ptr);
  readData(&unk_5daa275, base, ptr);
  readData(&wpLocationPowerSrc, base, ptr);
  readData(&ePickStyle, base, ptr);
  readData(&flAttachmentScaleFactor, base, ptr);
  readData(&unk_603bb31, base, ptr);
  readData(&unk_ce65d4b, base, ptr);
  readData(&unk_c794c59, base, ptr);
  readData(&unk_99ee15d, base, ptr);
  readData(&unk_1cf72ac, base, ptr);
  readData(&unk_3598432, base, ptr);
  readData(&unk_e579f8c, base, ptr);
  readData(&unk_9d78021, base, ptr);
  readData(&eTopology, base, ptr);
  readData(&ptMsgTriggeredEvents, base, ptr);
  readData(&unk_9c61362, base, ptr);
  readData(&ptCollData, base, ptr);
  readData(&unk_17acd26, base, ptr);
  readData(&unk_8fbba9b, base, ptr);
  readData(&unk_85f8d24, base, ptr);
  readData(&unk_98f87e6, base, ptr);
  readData(&ptCritterData, base, ptr);
  readData(&ptPlayerData, base, ptr);
  readData(&ptItemData, base, ptr);
  readData(&unk_3a551d4, base, ptr);
  readData(&unk_54868a4, base, ptr);
  readData(&unk_926b06b, base, ptr);
  readData(&unk_3960019, base, ptr);
  readData(&unk_402931f, base, ptr);
  readData(&unk_29ef3ee, base, ptr);
  readData(&ptBrainData, base, ptr);
  readData(&ptServerData, base, ptr);
  readData(&unk_9c719dc, base, ptr);
  readData(&unk_b1fed48, base, ptr);
  readData(&unk_c88d583, base, ptr);
  readData(&unk_8047aff, base, ptr);
  readData(&unk_da0202f, base, ptr);
  readData(&unk_ea1a3d1, base, ptr);
  readData(&ptPostprocessed, base, ptr);
  readData(&unk_2a84dc9, base, ptr);
  readData(&unk_d2b5e35, base, ptr);
  readData(&unk_2607092, base, ptr);
  readData(&unk_79da2a0, base, ptr);
  readData(&unk_261d1df, base, ptr);
}
