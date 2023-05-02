/**
 * Definition: MailRetrieveResponseMessage
 * Hash: 8877cbfd
 */

#include "MailRetrieveResponseMessage.h"

void MailRetrieveResponseMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idMail, base, current);
  current = ptr + 0x20;
  readData(&idErr, base, current);
  ptr += 0x28;
}
