/**
 * Definition: ACDEnterKnownMessage
 * Hash: 10abb2f8
 */

#include "ACDEnterKnownMessage.h"

void ACDEnterKnownMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&eLocationType, base, ptr);
  readData(&tWorldLocationData, base, ptr);
  readData(&tInvLocationData, base, ptr);
  readData(&unk_aa2bbb9, base, ptr);
  readData(&nMonsterRarity, base, ptr);
  readData(&nItemQuality, base, ptr);
  readData(&unk_b3671d5, base, ptr);
  readData(&dwLookHash, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&snoMarkerSet, base, ptr);
  readData(&unk_9cc41dd, base, ptr);
  readData(&unk_a2758c2, base, ptr);
  readData(&unk_7a55b3f, base, ptr);
  readData(&unk_7d23397, base, ptr);
  readData(&unk_3125d0e, base, ptr);
  readData(&snoAmbientOcclusionOverrideTex, base, ptr);
  readData(&dwTimeActorCreated, base, ptr);
  readData(&tEnterKnownLookOverrides, base, ptr);
  readData(&unk_c76aca7, base, ptr);
  readData(&uGizmoHash, base, ptr);
  readData(&unk_9e938b5, base, ptr);
  readData(&unk_f370a80, base, ptr);
  readData(&unk_b192047, base, ptr);
  readData(&unk_9d57e62, base, ptr);
  readData(&unk_3475ed9, base, ptr);
  readData(&unk_3929c26, base, ptr);
  readData(&unk_f5f15cc, base, ptr);
  readData(&unk_310a730, base, ptr);
}
