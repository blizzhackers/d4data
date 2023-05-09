/**
 * Definition: GameTestingWorldSamplingStartMessage
 * Hash: 555103ce
 */

#include "GameTestingWorldSamplingStartMessage.h"

void GameTestingWorldSamplingStartMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&snoSubzone, base, current);
  current = ptr + 0x18;
  readData(&snoScene, base, current);
  current = ptr + 0x1c;
  readData(&snoQuest, base, current);
  current = ptr + 0x20;
  readData(&szTileSetName, base, current);
  current = ptr + 0x60;
  readData(&szLocationName, base, current);
  current = ptr + 0xa0;
  readData(&unk_7571722, base, current);
  current = ptr + 0xa4;
  readData(&unk_6999b4f, base, current);
  current = ptr + 0xac;
  readData(&gbidLabel, base, current);
  current = ptr + 0xb0;
  readData(&unk_8d446c9, base, current);
  ptr += 0xb4;
}
