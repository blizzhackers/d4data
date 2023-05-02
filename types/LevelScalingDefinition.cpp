/**
 * Definition: LevelScalingDefinition
 * Hash: 8d13aa82
 */

#include "LevelScalingDefinition.h"

void LevelScalingDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nLevel, base, current);
  current = ptr + 0x4;
  readData(&flHPScalar, base, current);
  current = ptr + 0x8;
  readData(&unk_e5c5870, base, current);
  current = ptr + 0xc;
  readData(&unk_9592c2b, base, current);
  current = ptr + 0x10;
  readData(&unk_9b9d09c, base, current);
  current = ptr + 0x14;
  readData(&unk_31907b4, base, current);
  current = ptr + 0x18;
  readData(&unk_153c865, base, current);
  current = ptr + 0x1c;
  readData(&unk_3d92381, base, current);
  current = ptr + 0x20;
  readData(&unk_ba4504c, base, current);
  current = ptr + 0x24;
  readData(&unk_5f945b7, base, current);
  current = ptr + 0x28;
  readData(&unk_d970377, base, current);
  current = ptr + 0x30;
  readData(&unk_f48a6a1, base, current);
  current = ptr + 0x38;
  readData(&unk_16d37a5, base, current);
  current = ptr + 0x40;
  readData(&unk_a2ccfe, base, current);
  current = ptr + 0x48;
  readData(&unk_5addb48, base, current);
  current = ptr + 0x50;
  readData(&unk_21af36c, base, current);
  current = ptr + 0x58;
  readData(&unk_4148916, base, current);
  current = ptr + 0x60;
  readData(&unk_75141dd, base, current);
  current = ptr + 0x64;
  readData(&unk_81eda78, base, current);
  ptr += 0x78;
}
