/**
 * Definition: SkillNodeMaybe
 * Hash: 7d759f95
 */

#include "SkillNodeMaybe.h"

void SkillNodeMaybe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&gbidReward, base, current);
  current = ptr + 0x8;
  readData(&unk_6536340, base, current);
  current = ptr + 0xc;
  readData(&vPosition, base, current);
  current = ptr + 0x14;
  readData(&bRootNode, base, current);
  current = ptr + 0x18;
  readData(&uReqSkillPointsMaybe, base, current);
  current = ptr + 0x1c;
  readData(&unk_bb82ad1, base, current);
  current = ptr + 0x20;
  readData(&arConnections, base, current);
  current = ptr + 0x30;
  readData(&unk_e97a400, base, current);
  ptr += 0x40;
}
