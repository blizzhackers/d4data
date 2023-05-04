/**
 * Definition: RevealWorldMessage
 * Hash: fa3a85cc
 */

#include "RevealWorldMessage.h"

void RevealWorldMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&unk_2573139, base, current);
  current = ptr + 0x20;
  readData(&unk_b4055da, base, current);
  current = ptr + 0x2c;
  readData(&uKeyedDungeonTier, base, current);
  current = ptr + 0x34;
  readData(&arDungeonStates, base, current);
  current = ptr + 0xb4;
  readData(&unk_fc9049b, base, current);
  current = ptr + 0xb8;
  readData(&unk_9a2a829, base, current);
  current = ptr + 0xdc;
  readData(&unk_6966598, base, current);
  current = ptr + 0x100;
  readData(&unk_b020582, base, current);
  ptr += 0x104;
}
