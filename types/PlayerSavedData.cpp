/**
 * Definition: PlayerSavedData
 * Hash: 5d30597a
 */

#include "PlayerSavedData.h"

void PlayerSavedData::read(const char* base, char* &ptr) {
  readData(&tHotbarBtnAssignments, base, ptr);
  readData(&tPotionBtn, base, ptr);
  readData(&uSecondsPlayed, base, ptr);
  readData(&tHirelingSavedData, base, ptr);
  readData(&unk_4a24596, base, ptr);
  readData(&uTimeLastLevel, base, ptr);
  readData(&tActiveSkills, base, ptr);
  readData(&unk_faa8327, base, ptr);
  readData(&unk_68ce6c8, base, ptr);
  readData(&unk_a609782, base, ptr);
  readData(&unk_9a1fb9a, base, ptr);
  readData(&unk_4968c70, base, ptr);
  readData(&unk_a048c51, base, ptr);
  readData(&arTransmogSlots, base, ptr);
  readData(&unk_295c984, base, ptr);
  readData(&unk_bb40836, base, ptr);
}
