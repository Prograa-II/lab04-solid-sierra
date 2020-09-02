//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_RECEIPTWEB_H
#define LAB04_SOLID_RECEIPTWEB_H

#include "Receipt.h"
class ReceiptWeb : public Receipt {
public:
    ReceiptWeb();

    ReceiptWeb(int rNum);

    string toString(Game &g1) const override;

    ~ReceiptWeb();
};


#endif //LAB04_SOLID_RECEIPTWEB_H
