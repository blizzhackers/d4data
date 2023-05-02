/**
 * Definition: KillCountMessage
 * Hash: b952d8da
 */

#include "KillCountMessage.h"

void KillCountMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&nPlayerKills, base, current);
  current = ptr + 0x18;
  readData(&nDeaths, base, current);
  current = ptr + 0x1c;
  readData(&nAssists, base, current);
  ptr += 0x20;
}
