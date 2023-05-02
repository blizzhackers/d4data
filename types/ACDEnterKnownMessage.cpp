/**
 * Definition: ACDEnterKnownMessage
 * Hash: 10abb2f8
 */

#include "ACDEnterKnownMessage.h"

void ACDEnterKnownMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  current = ptr + 0x1c;
  readData(&dwFlags, base, current);
  current = ptr + 0x20;
  readData(&eLocationType, base, current);
  current = ptr + 0x24;
  readData(&tWorldLocationData, base, current);
  current = ptr + 0x58;
  readData(&tInvLocationData, base, current);
  current = ptr + 0x70;
  readData(&unk_aa2bbb9, base, current);
  current = ptr + 0x78;
  readData(&nMonsterRarity, base, current);
  current = ptr + 0x80;
  readData(&nItemQuality, base, current);
  current = ptr + 0x88;
  readData(&unk_b3671d5, base, current);
  current = ptr + 0x90;
  readData(&dwLookHash, base, current);
  current = ptr + 0x94;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x98;
  readData(&snoMarkerSet, base, current);
  current = ptr + 0xa0;
  readData(&unk_9cc41dd, base, current);
  current = ptr + 0xa8;
  readData(&unk_a2758c2, base, current);
  current = ptr + 0xb0;
  readData(&unk_7a55b3f, base, current);
  current = ptr + 0xb8;
  readData(&unk_7d23397, base, current);
  current = ptr + 0xc0;
  readData(&unk_3125d0e, base, current);
  current = ptr + 0xc8;
  readData(&snoAmbientOcclusionOverrideTex, base, current);
  current = ptr + 0xd0;
  readData(&dwTimeActorCreated, base, current);
  current = ptr + 0xd8;
  readData(&tEnterKnownLookOverrides, base, current);
  current = ptr + 0x10c;
  readData(&unk_c76aca7, base, current);
  current = ptr + 0x128;
  readData(&uGizmoHash, base, current);
  current = ptr + 0x130;
  readData(&unk_9e938b5, base, current);
  current = ptr + 0x140;
  readData(&unk_f370a80, base, current);
  current = ptr + 0x14c;
  readData(&unk_b192047, base, current);
  current = ptr + 0x154;
  readData(&unk_9d57e62, base, current);
  current = ptr + 0x15c;
  readData(&unk_3475ed9, base, current);
  current = ptr + 0x164;
  readData(&unk_3929c26, base, current);
  current = ptr + 0x170;
  readData(&unk_f5f15cc, base, current);
  current = ptr + 0x1b0;
  readData(&unk_310a730, base, current);
  ptr += 0x1f0;
}
