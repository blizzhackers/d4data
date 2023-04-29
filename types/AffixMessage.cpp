/**
 * Definition: AffixMessage
 * Hash: ce15ecf3
 */

#include "AffixMessage.h"

void AffixMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&fIdentified, base, ptr);
  readData(&unk_5daa987, base, ptr);
  readData(&unk_186efea, base, ptr);
  readData(&unk_be0e086, base, ptr);
}
