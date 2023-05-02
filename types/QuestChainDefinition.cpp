/**
 * Definition: QuestChainDefinition
 * Hash: e26445be
 */

#include "QuestChainDefinition.h"

void QuestChainDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0xc;
  readData(&snoSubzone, base, current);
  current = ptr + 0x10;
  readData(&unk_2feafdd, base, current);
  current = ptr + 0x14;
  readData(&unk_23523de, base, current);
  current = ptr + 0x18;
  readData(&unk_d684e1c, base, current);
  current = ptr + 0x20;
  readData(&unk_f6ed359, base, current);
  current = ptr + 0x30;
  readData(&unk_97b742f, base, current);
  current = ptr + 0x40;
  readData(&unk_f830510, base, current);
  current = ptr + 0x44;
  readData(&unk_8c8a554, base, current);
  current = ptr + 0x48;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x50;
  readData(&vecMarkerLocation, base, current);
  current = ptr + 0x5c;
  readData(&unk_bd5e686, base, current);
  current = ptr + 0x64;
  readData(&unk_b89ea42, base, current);
  current = ptr + 0x70;
  readData(&unk_d35a97e, base, current);
  current = ptr + 0x74;
  readData(&unk_8da547c, base, current);
  current = ptr + 0x78;
  readData(&unk_10a039b, base, current);
  current = ptr + 0x7c;
  readData(&unk_62b3134, base, current);
  current = ptr + 0x80;
  readData(&unk_adc6722, base, current);
  ptr += 0x90;
}
