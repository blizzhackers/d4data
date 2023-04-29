/**
 * Definition: GizmoMessage
 * Hash: 5854dbab
 */

#include "GizmoMessage.h"

void GizmoMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_e4fae63, base, ptr);
  readData(&unk_7cc2566, base, ptr);
}
