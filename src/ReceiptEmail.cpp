//
// Created by felip on 24/8/2020.
//

#include "ReceiptEmail.h"

ReceiptEmail::ReceiptEmail(int rNum) : Receipt(rNum) {

}

string ReceiptEmail::toString(Game &ga) const {
    std::ostringstream s;
    s<<"EMAIL RECEIPT: "<<std::endl;
    s<<ga.toString()<<std::endl;
    return s.str();
}

string ReceiptEmail::sendReceipt() const {
    return "Send Recipt by Email";
}

ReceiptEmail::~ReceiptEmail() {
}
