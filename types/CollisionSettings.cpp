/**
 * Definition: CollisionSettings
 * Hash: b6c4d1fd
 */

#include "CollisionSettings.h"

void CollisionSettings::read(const char* base, char* &ptr) {
  readData(&snoCollision, base, ptr);
  readData(&unk_1966de6, base, ptr);
  readData(&unk_a882afd, base, ptr);
  readData(&unk_54403ff, base, ptr);
}
