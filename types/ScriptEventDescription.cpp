/**
 * Definition: ScriptEventDescription
 * Hash: deb446db
 */

#include "ScriptEventDescription.h"

void ScriptEventDescription::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eEventType, base, current);
  current = ptr + 0x8;
  readData(&szDescription, base, current);
  current = ptr + 0x10;
  readData(&szGrammar, base, current);
  current = ptr + 0x18;
  readData(&arParamTypes, base, current);
  current = ptr + 0x28;
  readData(&szParamNames, base, current);
  current = ptr + 0x48;
  readData(&szFuncParamNames, base, current);
  current = ptr + 0x68;
  readData(&szParamDescriptions, base, current);
  current = ptr + 0x88;
  readData(&unk_aab17b3, base, current);
  current = ptr + 0x98;
  readData(&unk_7ef4b8b, base, current);
  current = ptr + 0xa8;
  readData(&unk_336d153, base, current);
  current = ptr + 0xb8;
  readData(&unk_41cdd20, base, current);
  current = ptr + 0xc8;
  readData(&dwFlags, base, current);
  current = ptr + 0xd0;
  readData(&unk_165bc75, base, current);
  ptr += 0xd8;
}
