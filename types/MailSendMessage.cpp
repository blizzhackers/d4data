/**
 * Definition: MailSendMessage
 * Hash: c20e9b2
 */

#include "MailSendMessage.h"

void MailSendMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nToAccount, base, current);
  ptr += 0x18;
}
