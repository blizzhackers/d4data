/**
 * Definition: Environment
 * Hash: 99435235
 */

#include "Environment.h"

void Environment::read(const char* base, char* &ptr) {
  readData(&tPostFXParams, base, ptr);
  readData(&snoSkyboxActor, base, ptr);
  readData(&unk_6367947, base, ptr);
  readData(&snoWeather, base, ptr);
  readData(&unk_4c76230, base, ptr);
  readData(&unk_afd6821, base, ptr);
  readData(&unk_580b325, base, ptr);
  readData(&iHotfixSLOFilename, base, ptr);
  readData(&flFarPlaneCap, base, ptr);
  readData(&unk_7680ff6, base, ptr);
  readData(&unk_31e7772, base, ptr);
  readData(&unk_21b2258, base, ptr);
  readData(&unk_71767bc, base, ptr);
  readData(&unk_96bdac9, base, ptr);
  readData(&unk_f4f9d6f, base, ptr);
  readData(&unk_55eead1, base, ptr);
  readData(&unk_a7ebd97, base, ptr);
}
