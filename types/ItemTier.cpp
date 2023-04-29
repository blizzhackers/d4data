/**
 * Definition: ItemTier
 * Hash: 33a68e03
 */

#include "ItemTier.h"

void ItemTier::read(const char* base, char* &ptr) {
  readData(&snoHead, base, ptr);
  readData(&snoTorso, base, ptr);
  readData(&snoFeet, base, ptr);
  readData(&snoHands, base, ptr);
  readData(&snoLegs, base, ptr);
  readData(&snoMainHand, base, ptr);
  readData(&snoOffHand, base, ptr);
  readData(&unk_10ef80a, base, ptr);
  readData(&unk_2424420, base, ptr);
  readData(&unk_7757fd6, base, ptr);
  readData(&unk_9e2632, base, ptr);
  readData(&unk_6ce8668, base, ptr);
  readData(&snoDye, base, ptr);
  readData(&szName, base, ptr);
}
