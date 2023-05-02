/**
 * Definition: MailRetrieveMessage
 * Hash: 884adbae
 */

#include "MailRetrieveMessage.h"

void MailRetrieveMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idMail, base, current);
  ptr += 0x20;
}
