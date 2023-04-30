/**
 * Definition: SkillNodeMaybe
 * Hash: 7d759f95
 */

#include "SkillNodeMaybe.h"

void SkillNodeMaybe::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&gbidReward, base, ptr);
  readData(&unk_6536340, base, ptr);
  readData(&vPosition, base, ptr);
  readData(&bRootNode, base, ptr);
  readData(&uReqSkillPointsMaybe, base, ptr);
  readData(&unk_bb82ad1, base, ptr);
  readData(&arConnections, base, ptr);
  readData(&unk_e97a400, base, ptr);
}
