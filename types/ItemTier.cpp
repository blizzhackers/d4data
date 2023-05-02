/**
 * Definition: ItemTier
 * Hash: 33a68e03
 */

#include "ItemTier.h"

void ItemTier::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoHead, base, current);
  current = ptr + 0x4;
  readData(&snoTorso, base, current);
  current = ptr + 0x8;
  readData(&snoFeet, base, current);
  current = ptr + 0xc;
  readData(&snoHands, base, current);
  current = ptr + 0x10;
  readData(&snoLegs, base, current);
  current = ptr + 0x14;
  readData(&snoMainHand, base, current);
  current = ptr + 0x18;
  readData(&snoOffHand, base, current);
  current = ptr + 0x1c;
  readData(&unk_10ef80a, base, current);
  current = ptr + 0x20;
  readData(&unk_2424420, base, current);
  current = ptr + 0x24;
  readData(&unk_7757fd6, base, current);
  current = ptr + 0x28;
  readData(&unk_9e2632, base, current);
  current = ptr + 0x2c;
  readData(&unk_6ce8668, base, current);
  current = ptr + 0x30;
  readData(&snoDye, base, current);
  current = ptr + 0x34;
  readData(&szName, base, current);
  ptr += 0x38;
}
