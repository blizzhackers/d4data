/**
 * Definition: StoreProductDefinition
 * Hash: c920c917
 */

#include "StoreProductDefinition.h"

void StoreProductDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eType, base, ptr);
  readData(&unk_d0a3165, base, ptr);
  readData(&unk_de90ee6, base, ptr);
  readData(&unk_12a0e73, base, ptr);
  readData(&unk_2dfab35, base, ptr);
  readData(&unk_3b58fa6, base, ptr);
  readData(&unk_c7fa9b8, base, ptr);
  readData(&snoItemTransmog, base, ptr);
  readData(&snoMount, base, ptr);
  readData(&snoEmote, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&snoEmblem, base, ptr);
  readData(&snoHeadstone, base, ptr);
  readData(&unk_e4265e4, base, ptr);
  readData(&unk_54edf70, base, ptr);
  readData(&arCardArtVariants, base, ptr);
  readData(&unk_7b588be, base, ptr);
  readData(&unk_a65c016, base, ptr);
  readData(&unk_9b75db9, base, ptr);
  readData(&unk_1f0b92f, base, ptr);
  readData(&unk_eb16f59, base, ptr);
  readData(&unk_9a0855f, base, ptr);
  readData(&unk_8c37b97, base, ptr);
  readData(&unk_54578ff, base, ptr);
  readData(&unk_a08a2f4, base, ptr);
  readData(&unk_aa674fe, base, ptr);
  readData(&unk_68af238, base, ptr);
  readData(&tUTF8Length, base, ptr);
  readData(&unk_e5d7f3, base, ptr);
}
