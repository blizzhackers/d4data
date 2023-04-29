/**
 * Definition: RevealTeamMessage
 * Hash: 68b7e24b
 */

#include "RevealTeamMessage.h"

void RevealTeamMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eTeam, base, ptr);
  readData(&dwTeamFlags, base, ptr);
  readData(&eTeamColoring, base, ptr);
}
