/**
 * Definition: NPCComponentSetDefinition
 * Hash: 59359749
 */

#include "NPCComponentSetDefinition.h"

void NPCComponentSetDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&arAppearances, base, ptr);
  readData(&unk_dd52f5a, base, ptr);
  readData(&unk_86d7be9, base, ptr);
  readData(&unk_28d5aa0, base, ptr);
  readData(&unk_e8ad810, base, ptr);
  readData(&unk_be478b4, base, ptr);
  readData(&unk_7cdd390, base, ptr);
  readData(&unk_8bee334, base, ptr);
  readData(&unk_2e94cee, base, ptr);
  readData(&unk_395e53, base, ptr);
  readData(&unk_3810f4, base, ptr);
  readData(&unk_80d753b, base, ptr);
  readData(&unk_1ae0e98, base, ptr);
}
