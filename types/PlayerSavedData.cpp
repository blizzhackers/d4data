/**
 * Definition: PlayerSavedData
 * Hash: 5d30597a
 */

#include "PlayerSavedData.h"

void PlayerSavedData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHotbarBtnAssignments, base, current);
  current = ptr + 0x60;
  readData(&tPotionBtn, base, current);
  current = ptr + 0x70;
  readData(&uSecondsPlayed, base, current);
  current = ptr + 0x74;
  readData(&tHirelingSavedData, base, current);
  current = ptr + 0xdc;
  readData(&unk_4a24596, base, current);
  current = ptr + 0x1e0;
  readData(&uTimeLastLevel, base, current);
  current = ptr + 0x1e4;
  readData(&tActiveSkills, base, current);
  current = ptr + 0x214;
  readData(&tEnchantSkills, base, current);
  current = ptr + 0x22c;
  readData(&unk_68ce6c8, base, current);
  current = ptr + 0x240;
  readData(&unk_a609782, base, current);
  current = ptr + 0x3d0;
  readData(&unk_9a1fb9a, base, current);
  current = ptr + 0x7d4;
  readData(&unk_4968c70, base, current);
  current = ptr + 0x7d8;
  readData(&unk_a048c51, base, current);
  current = ptr + 0x7dc;
  readData(&arTransmogSlots, base, current);
  current = ptr + 0x8d0;
  readData(&unk_295c984, base, current);
  current = ptr + 0xda8;
  readData(&unk_bb40836, base, current);
  ptr += 0xe58;
}
