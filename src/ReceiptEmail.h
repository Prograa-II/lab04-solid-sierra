//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_RECEIPTEMAIL_H
#define LAB04_SOLID_RECEIPTEMAIL_H
#include "Receipt.h"
class ReceiptEmail : public Receipt {
public:
    ReceiptEmail();

    ReceiptEmail(int rNum);

    string toString(Game &g1) const override;

    ~ReceiptEmail();
    string sendReceipt() const override;
};


#endif //LAB04_SOLID_RECEIPTEMAIL_H
