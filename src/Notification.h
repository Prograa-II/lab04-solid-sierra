//
// Created by felip on 24/8/2020.
//


#ifndef LAB04_SOLID_NOTIFICATION_H
#define LAB04_SOLID_NOTIFICATION_H
#include <sstream>

class Notification {

private:
    virtual std::string sendNotification()=0;
};


#endif //LAB04_SOLID_NOTIFICATION_H
