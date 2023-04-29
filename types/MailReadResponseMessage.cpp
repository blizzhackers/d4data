/**
 * Definition: MailReadResponseMessage
 * Hash: fc82bdb3
 */

#include "MailReadResponseMessage.h"

void MailReadResponseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
  readData(&idErr, base, ptr);
}
