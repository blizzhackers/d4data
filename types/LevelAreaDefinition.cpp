/**
 * Definition: LevelAreaDefinition
 * Hash: d3e96a9a
 */

#include "LevelAreaDefinition.h"

void LevelAreaDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&snoWeather, base, ptr);
  readData(&unk_6367947, base, ptr);
  readData(&unk_4709778, base, ptr);
  readData(&unk_926359f, base, ptr);
  readData(&unk_27d289f, base, ptr);
  readData(&unk_3d7c8a2, base, ptr);
  readData(&unk_7b7ab4b, base, ptr);
  readData(&unk_61c02e8, base, ptr);
  readData(&unk_4e56acb, base, ptr);
  readData(&unk_2f3db18, base, ptr);
}
