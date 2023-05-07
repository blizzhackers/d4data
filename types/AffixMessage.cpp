/**
 * Definition: AffixMessage
 * Hash: ce15ecf3
 */

#include "AffixMessage.h"

void AffixMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&fIdentified, base, current);
  current = ptr + 0x1c;
  readData(&aAffixes, base, current);
  current = ptr + 0x34;
  readData(&unk_186efea, base, current);
  current = ptr + 0x60;
  readData(&unk_be0e086, base, current);
  ptr += 0x78;
}
