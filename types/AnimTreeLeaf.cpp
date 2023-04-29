/**
 * Definition: AnimTreeLeaf
 * Hash: bce33d0d
 */

#include "AnimTreeLeaf.h"

void AnimTreeLeaf::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&eNodeType, base, ptr);
  readData(&snoAnim, base, ptr);
  readData(&unk_740ce2b, base, ptr);
  readData(&flPoseFrame, base, ptr);
  readData(&flPlaySpeed, base, ptr);
  readData(&nSyncGroupIndex, base, ptr);
  readData(&bIsDisabled, base, ptr);
  readData(&unk_4088987, base, ptr);
  readData(&unk_5d19bee, base, ptr);
  readData(&eUpdateMode, base, ptr);
  readData(&eBoneWeightSet, base, ptr);
  readData(&eAnimLayer, base, ptr);
  readData(&unk_51765c9, base, ptr);
}
