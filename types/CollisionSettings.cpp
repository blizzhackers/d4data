/**
 * Definition: CollisionSettings
 * Hash: b6c4d1fd
 */

#include "CollisionSettings.h"

void CollisionSettings::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCollision, base, current);
  current = ptr + 0x4;
  readData(&unk_1966de6, base, current);
  current = ptr + 0xc;
  readData(&unk_a882afd, base, current);
  current = ptr + 0x10;
  readData(&unk_54403ff, base, current);
  ptr += 0x14;
}
