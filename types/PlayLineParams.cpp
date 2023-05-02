/**
 * Definition: PlayLineParams
 * Hash: 341b1bc2
 */

#include "PlayLineParams.h"

void PlayLineParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversation, base, current);
  current = ptr + 0x4;
  readData(&unk_4e8ccf5, base, current);
  current = ptr + 0x8;
  readData(&unk_d85ca94, base, current);
  current = ptr + 0xc;
  readData(&bFirstLine, base, current);
  current = ptr + 0x10;
  readData(&dwLineUID, base, current);
  current = ptr + 0x14;
  readData(&unk_3528310, base, current);
  current = ptr + 0x18;
  readData(&eLineGender, base, current);
  current = ptr + 0x1c;
  readData(&eLineClass, base, current);
  current = ptr + 0x20;
  readData(&unk_1dc956e, base, current);
  current = ptr + 0x24;
  readData(&ePlayerGender, base, current);
  current = ptr + 0x28;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x2c;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x30;
  readData(&dwLineFlags, base, current);
  current = ptr + 0x34;
  readData(&unk_4df365f, base, current);
  current = ptr + 0x38;
  readData(&nLineGUID, base, current);
  current = ptr + 0x3c;
  readData(&unk_2d60579, base, current);
  current = ptr + 0x40;
  readData(&unk_8c9c6ba, base, current);
  ptr += 0x58;
}
