/**
 * Definition: BossEncounterStateMessage
 * Hash: ba567750
 */

#include "BossEncounterStateMessage.h"

void BossEncounterStateMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ebebe4b, base, ptr);
  readData(&eState, base, ptr);
  readData(&unk_57adc31, base, ptr);
}
