/**
 * Definition: SurveyMessage
 * Hash: 16a69b73
 */

#include "SurveyMessage.h"

void SurveyMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&tSNOName, base, current);
  current = ptr + 0x18;
  readData(&gbidSurveyType, base, current);
  ptr += 0x1c;
}
