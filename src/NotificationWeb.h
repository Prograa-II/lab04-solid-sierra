//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_NOTIFICATIONWEB_H
#define LAB04_SOLID_NOTIFICATIONWEB_H
#include <sstream>
#include "Notification.h"

class NotificationWeb: public Notification{
public:
    std::string sendNotification();

};


#endif //LAB04_SOLID_NOTIFICATIONWEB_H
