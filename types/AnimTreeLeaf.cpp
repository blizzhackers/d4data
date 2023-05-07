/**
 * Definition: AnimTreeLeaf
 * Hash: bce33d0d
 */

#include "AnimTreeLeaf.h"

void AnimTreeLeaf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&eNodeType, base, current);
  current = ptr + 0x8;
  readData(&snoAnim, base, current);
  current = ptr + 0xc;
  readData(&unk_740ce2b, base, current);
  current = ptr + 0x10;
  readData(&flPoseFrame, base, current);
  current = ptr + 0x14;
  readData(&flPlaySpeed, base, current);
  current = ptr + 0x18;
  readData(&nSyncGroupIndex, base, current);
  current = ptr + 0x1c;
  readData(&bIsDisabled, base, current);
  current = ptr + 0x20;
  readData(&unk_4088987, base, current);
  current = ptr + 0x24;
  readData(&eScaleMethod, base, current);
  current = ptr + 0x28;
  readData(&eUpdateMode, base, current);
  current = ptr + 0x2c;
  readData(&eBoneWeightSet, base, current);
  current = ptr + 0x30;
  readData(&eAnimLayer, base, current);
  current = ptr + 0x34;
  readData(&unk_51765c9, base, current);
  ptr += 0x38;
}
