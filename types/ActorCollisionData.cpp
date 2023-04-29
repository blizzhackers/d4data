/**
 * Definition: ActorCollisionData
 * Hash: 719926df
 */

#include "ActorCollisionData.h"

void ActorCollisionData::read(const char* base, char* &ptr) {
  readData(&tCollisionSettings, base, ptr);
  readData(&eCollisionShape, base, ptr);
  readData(&wcylCollision, base, ptr);
  readData(&aabbCollision, base, ptr);
  readData(&unk_3d328de, base, ptr);
  readData(&unk_7a83a6d, base, ptr);
  readData(&unk_7078ee3, base, ptr);
  readData(&unk_1ddc60c, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&unk_c5b3851, base, ptr);
  readData(&unk_523b9d9, base, ptr);
  readData(&unk_ce78a30, base, ptr);
  readData(&unk_f26505b, base, ptr);
  readData(&unk_c627b16, base, ptr);
}
