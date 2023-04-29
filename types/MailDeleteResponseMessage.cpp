/**
 * Definition: MailDeleteResponseMessage
 * Hash: 962b278a
 */

#include "MailDeleteResponseMessage.h"

void MailDeleteResponseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
  readData(&idErr, base, ptr);
}
