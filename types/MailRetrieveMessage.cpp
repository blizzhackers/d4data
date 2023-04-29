/**
 * Definition: MailRetrieveMessage
 * Hash: 884adbae
 */

#include "MailRetrieveMessage.h"

void MailRetrieveMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
}
