/**
 * Definition: ConversationDefinition
 * Hash: c66617a4
 */

#include "ConversationDefinition.h"

void ConversationDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eConvType, base, ptr);
  readData(&unk_1fd072a, base, ptr);
  readData(&unk_951e771, base, ptr);
  readData(&unk_aefb1a3, base, ptr);
  readData(&flCooldownTime, base, ptr);
  readData(&unk_5031de3, base, ptr);
  readData(&unk_3587d15, base, ptr);
  readData(&unk_d35e9de, base, ptr);
  readData(&unk_8d6f162, base, ptr);
  readData(&unk_ac91f5d, base, ptr);
  readData(&unk_e1d8535, base, ptr);
  readData(&unk_b32ef27, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_a159b10, base, ptr);
  readData(&szSetPlayerFlag, base, ptr);
  readData(&unk_bbc67ad, base, ptr);
}
