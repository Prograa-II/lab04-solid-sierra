//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_RECEIPT_H
#define LAB04_SOLID_RECEIPT_H

#include <iostream>
using std::string;

class Receipt {
public:
    Receipt();
    Receipt(int rNumber );
    virtual string toString() const =0;

private:
    int receiptNumber;

};


#endif //LAB04_SOLID_RECEIPT_H
