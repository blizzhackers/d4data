/**
 * Definition: ActorCollisionData
 * Hash: 719926df
 */

#include "ActorCollisionData.h"

void ActorCollisionData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tCollisionSettings, base, current);
  current = ptr + 0x14;
  readData(&eCollisionShape, base, current);
  current = ptr + 0x18;
  readData(&wcylCollision, base, current);
  current = ptr + 0x2c;
  readData(&aabbCollision, base, current);
  current = ptr + 0x44;
  readData(&unk_3d328de, base, current);
  current = ptr + 0x48;
  readData(&unk_7a83a6d, base, current);
  current = ptr + 0x4c;
  readData(&unk_7078ee3, base, current);
  current = ptr + 0x50;
  readData(&unk_1ddc60c, base, current);
  current = ptr + 0x54;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x58;
  readData(&unk_c5b3851, base, current);
  current = ptr + 0x60;
  readData(&unk_523b9d9, base, current);
  current = ptr + 0x70;
  readData(&unk_ce78a30, base, current);
  current = ptr + 0x94;
  readData(&unk_f26505b, base, current);
  current = ptr + 0xb8;
  readData(&unk_c627b16, base, current);
  ptr += 0xc0;
}
