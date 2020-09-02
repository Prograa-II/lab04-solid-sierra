//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_RECEIPT_H
#define LAB04_SOLID_RECEIPT_H

#include "Game.h"
#include <iostream>
#include <sstream>

using std::string;

class Receipt {
public:
    Receipt();

    Receipt(int rNumber );

    virtual string toString(Game &ga) const =0;

    ~Receipt();

private:
    int receiptNumber;
};


#endif //LAB04_SOLID_RECEIPT_H
