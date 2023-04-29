/**
 * Definition: MailSendMessage
 * Hash: c20e9b2
 */

#include "MailSendMessage.h"

void MailSendMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nToAccount, base, ptr);
}
