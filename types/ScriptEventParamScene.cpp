/**
 * Definition: ScriptEventParamScene
 * Hash: 4df62196
 */

#include "ScriptEventParamScene.h"

void ScriptEventParamScene::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoScene, base, current);
  ptr += 0x20;
}
