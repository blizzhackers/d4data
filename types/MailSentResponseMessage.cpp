/**
 * Definition: MailSentResponseMessage
 * Hash: e5bffc11
 */

#include "MailSentResponseMessage.h"

void MailSentResponseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
  readData(&idErr, base, ptr);
}
