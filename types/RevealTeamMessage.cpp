/**
 * Definition: RevealTeamMessage
 * Hash: 68b7e24b
 */

#include "RevealTeamMessage.h"

void RevealTeamMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eTeam, base, current);
  current = ptr + 0x14;
  readData(&dwTeamFlags, base, current);
  current = ptr + 0x18;
  readData(&eTeamColoring, base, current);
  ptr += 0x1c;
}
