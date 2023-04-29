/**
 * Definition: PlayLineParams
 * Hash: 341b1bc2
 */

#include "PlayLineParams.h"

void PlayLineParams::read(const char* base, char* &ptr) {
  readData(&snoConversation, base, ptr);
  readData(&unk_4e8ccf5, base, ptr);
  readData(&unk_d85ca94, base, ptr);
  readData(&bFirstLine, base, ptr);
  readData(&dwLineUID, base, ptr);
  readData(&unk_3528310, base, ptr);
  readData(&eLineGender, base, ptr);
  readData(&eLineClass, base, ptr);
  readData(&unk_1dc956e, base, ptr);
  readData(&ePlayerGender, base, ptr);
  readData(&ePlayerClass, base, ptr);
  readData(&snoSpeaker, base, ptr);
  readData(&dwLineFlags, base, ptr);
  readData(&unk_4df365f, base, ptr);
  readData(&nLineGUID, base, ptr);
  readData(&unk_2d60579, base, ptr);
  readData(&unk_8c9c6ba, base, ptr);
}
