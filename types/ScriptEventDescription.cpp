/**
 * Definition: ScriptEventDescription
 * Hash: deb446db
 */

#include "ScriptEventDescription.h"

void ScriptEventDescription::read(const char* base, char* &ptr) {
  readData(&eEventType, base, ptr);
  readData(&szDescription, base, ptr);
  readData(&szGrammar, base, ptr);
  readData(&arParamTypes, base, ptr);
  readData(&szParamNames, base, ptr);
  readData(&szFuncParamNames, base, ptr);
  readData(&szParamDescriptions, base, ptr);
  readData(&unk_aab17b3, base, ptr);
  readData(&unk_7ef4b8b, base, ptr);
  readData(&unk_336d153, base, ptr);
  readData(&unk_41cdd20, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_165bc75, base, ptr);
}
