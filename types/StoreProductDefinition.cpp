/**
 * Definition: StoreProductDefinition
 * Hash: c920c917
 */

#include "StoreProductDefinition.h"

void StoreProductDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0x10;
  readData(&unk_d0a3165, base, current);
  current = ptr + 0x20;
  readData(&unk_de90ee6, base, current);
  current = ptr + 0x30;
  readData(&unk_12a0e73, base, current);
  current = ptr + 0x40;
  readData(&unk_2dfab35, base, current);
  current = ptr + 0x50;
  readData(&unk_3b58fa6, base, current);
  current = ptr + 0x60;
  readData(&unk_c7fa9b8, base, current);
  current = ptr + 0x64;
  readData(&snoItemTransmog, base, current);
  current = ptr + 0x68;
  readData(&snoMount, base, current);
  current = ptr + 0x6c;
  readData(&snoEmote, base, current);
  current = ptr + 0x70;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x74;
  readData(&snoJewelry, base, current);
  current = ptr + 0x78;
  readData(&snoEmblem, base, current);
  current = ptr + 0x7c;
  readData(&snoHeadstone, base, current);
  current = ptr + 0x80;
  readData(&unk_e4265e4, base, current);
  current = ptr + 0x84;
  readData(&unk_54edf70, base, current);
  current = ptr + 0x88;
  readData(&arCardArtVariants, base, current);
  current = ptr + 0x98;
  readData(&unk_7b588be, base, current);
  current = ptr + 0x9c;
  readData(&unk_a65c016, base, current);
  current = ptr + 0xa0;
  readData(&unk_9b75db9, base, current);
  current = ptr + 0xa4;
  readData(&unk_1f0b92f, base, current);
  current = ptr + 0xa8;
  readData(&unk_eb16f59, base, current);
  current = ptr + 0xac;
  readData(&unk_9a0855f, base, current);
  current = ptr + 0xb0;
  readData(&unk_8c37b97, base, current);
  current = ptr + 0xb4;
  readData(&unk_54578ff, base, current);
  current = ptr + 0xb8;
  readData(&unk_a08a2f4, base, current);
  current = ptr + 0xbc;
  readData(&unk_aa674fe, base, current);
  current = ptr + 0xc0;
  readData(&unk_68af238, base, current);
  current = ptr + 0xc4;
  readData(&tUTF8Length, base, current);
  current = ptr + 0xf8;
  readData(&unk_e5d7f3, base, current);
  ptr += 0x110;
}
