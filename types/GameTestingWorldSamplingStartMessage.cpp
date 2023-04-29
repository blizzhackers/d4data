/**
 * Definition: GameTestingWorldSamplingStartMessage
 * Hash: 555103ce
 */

#include "GameTestingWorldSamplingStartMessage.h"

void GameTestingWorldSamplingStartMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoScene, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&unk_9ffb368, base, ptr);
  readData(&szLocationName, base, ptr);
  readData(&unk_7571722, base, ptr);
  readData(&unk_6999b4f, base, ptr);
  readData(&gbidLabel, base, ptr);
  readData(&unk_8d446c9, base, ptr);
}
