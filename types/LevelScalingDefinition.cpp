/**
 * Definition: LevelScalingDefinition
 * Hash: 8d13aa82
 */

#include "LevelScalingDefinition.h"

void LevelScalingDefinition::read(const char* base, char* &ptr) {
  readData(&nLevel, base, ptr);
  readData(&flHPScalar, base, ptr);
  readData(&unk_e5c5870, base, ptr);
  readData(&unk_9592c2b, base, ptr);
  readData(&unk_9b9d09c, base, ptr);
  readData(&unk_31907b4, base, ptr);
  readData(&unk_153c865, base, ptr);
  readData(&unk_3d92381, base, ptr);
  readData(&unk_ba4504c, base, ptr);
  readData(&unk_5f945b7, base, ptr);
  readData(&unk_d970377, base, ptr);
  readData(&unk_f48a6a1, base, ptr);
  readData(&unk_16d37a5, base, ptr);
  readData(&unk_a2ccfe, base, ptr);
  readData(&unk_5addb48, base, ptr);
  readData(&unk_21af36c, base, ptr);
  readData(&unk_4148916, base, ptr);
  readData(&unk_75141dd, base, ptr);
  readData(&unk_81eda78, base, ptr);
}
