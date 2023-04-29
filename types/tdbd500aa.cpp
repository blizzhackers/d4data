/**
 * Definition: tdbd500aa
 * Hash: dbd500aa
 */

#include "tdbd500aa.h"

void tdbd500aa::read(const char* base, char* &ptr) {
  readData(&snoScript, base, ptr);
  readData(&unk_eb4ff85, base, ptr);
  readData(&unk_195410b, base, ptr);
  readData(&unk_e1b2967, base, ptr);
  readData(&fInvulnerable, base, ptr);
  readData(&unk_d27bf99, base, ptr);
  readData(&fCannotDie, base, ptr);
  readData(&unk_9ad1b04, base, ptr);
  readData(&flNoSpawnRadius, base, ptr);
}
