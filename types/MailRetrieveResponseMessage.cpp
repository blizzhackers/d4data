/**
 * Definition: MailRetrieveResponseMessage
 * Hash: 8877cbfd
 */

#include "MailRetrieveResponseMessage.h"

void MailRetrieveResponseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
  readData(&idErr, base, ptr);
}
