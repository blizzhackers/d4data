/**
 * Definition: UnassignSkillMessage
 * Hash: 8b782c6c
 */

#include "UnassignSkillMessage.h"

void UnassignSkillMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nSlot, base, ptr);
  readData(&unk_1c27791, base, ptr);
  readData(&unk_c5e6abf, base, ptr);
}
