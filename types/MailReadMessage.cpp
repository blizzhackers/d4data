/**
 * Definition: MailReadMessage
 * Hash: 9c727764
 */

#include "MailReadMessage.h"

void MailReadMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idMail, base, ptr);
}
