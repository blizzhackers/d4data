/**
 * Definition: QuestChainDefinition
 * Hash: e26445be
 */

#include "QuestChainDefinition.h"

void QuestChainDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&unk_2feafdd, base, ptr);
  readData(&unk_23523de, base, ptr);
  readData(&unk_d684e1c, base, ptr);
  readData(&unk_f6ed359, base, ptr);
  readData(&unk_97b742f, base, ptr);
  readData(&unk_f830510, base, ptr);
  readData(&unk_8c8a554, base, ptr);
  readData(&tMarkerHandle, base, ptr);
  readData(&vecMarkerLocation, base, ptr);
  readData(&unk_bd5e686, base, ptr);
  readData(&unk_b89ea42, base, ptr);
  readData(&unk_d35a97e, base, ptr);
  readData(&unk_8da547c, base, ptr);
  readData(&unk_10a039b, base, ptr);
  readData(&unk_62b3134, base, ptr);
  readData(&unk_adc6722, base, ptr);
}
