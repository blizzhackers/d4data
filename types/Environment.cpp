/**
 * Definition: Environment
 * Hash: 99435235
 */

#include "Environment.h"

void Environment::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tPostFXParams, base, current);
  current = ptr + 0x20;
  readData(&snoSkyboxActor, base, current);
  current = ptr + 0x24;
  readData(&snoAudioContext, base, current);
  current = ptr + 0x28;
  readData(&snoWeather, base, current);
  current = ptr + 0x2c;
  readData(&unk_4c76230, base, current);
  current = ptr + 0x30;
  readData(&unk_afd6821, base, current);
  current = ptr + 0x40;
  readData(&unk_580b325, base, current);
  current = ptr + 0x44;
  readData(&unk_9f4feca, base, current);
  current = ptr + 0x48;
  readData(&flFarPlaneCap, base, current);
  current = ptr + 0x4c;
  readData(&unk_7680ff6, base, current);
  current = ptr + 0x50;
  readData(&unk_31e7772, base, current);
  current = ptr + 0x54;
  readData(&unk_21b2258, base, current);
  current = ptr + 0x58;
  readData(&unk_71767bc, base, current);
  current = ptr + 0x5c;
  readData(&unk_96bdac9, base, current);
  current = ptr + 0x60;
  readData(&unk_f4f9d6f, base, current);
  current = ptr + 0x64;
  readData(&unk_55eead1, base, current);
  current = ptr + 0x68;
  readData(&unk_a7ebd97, base, current);
  ptr += 0x6c;
}
