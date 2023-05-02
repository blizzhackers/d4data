/**
 * Definition: GizmoMessage
 * Hash: 5854dbab
 */

#include "GizmoMessage.h"

void GizmoMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_e4fae63, base, current);
  current = ptr + 0x1c;
  readData(&unk_7cc2566, base, current);
  ptr += 0x24;
}
