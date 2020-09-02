//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_NOTIFICATIONEMAIL_H
#define LAB04_SOLID_NOTIFICATIONEMAIL_H
#include<sstream>
#include "Notification.h"

class NotificationEmail: public Notification{

private:
     std::string sendNotification();

};


#endif //LAB04_SOLID_NOTIFICATIONEMAIL_H
