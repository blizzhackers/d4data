/**
 * Definition: AssignSkillMessage
 * Hash: 1d99229
 */

#include "AssignSkillMessage.h"

void AssignSkillMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&nSlot, base, ptr);
  readData(&unk_1c27791, base, ptr);
  readData(&unk_c5e6abf, base, ptr);
  readData(&unk_2512b7c, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
