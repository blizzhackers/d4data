/**
 * Definition: KillCountMessage
 * Hash: b952d8da
 */

#include "KillCountMessage.h"

void KillCountMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&nPlayerKills, base, ptr);
  readData(&nDeaths, base, ptr);
  readData(&nAssists, base, ptr);
}
