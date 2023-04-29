/**
 * Definition: MailDeleteMessage
 * Hash: 1d35fa3b
 */

#include "MailDeleteMessage.h"

void MailDeleteMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
}
