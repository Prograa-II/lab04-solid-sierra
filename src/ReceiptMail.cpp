//
// Created by felip on 24/8/2020.
//

#include "ReceiptMail.h"
ReceiptMail::ReceiptMail(int rNum) : Receipt(rNum) {

}

string ReceiptMail::toString(Game &ga) const {
    std::ostringstream s;
    s<<"MAIL RECEIPT: "<<std::endl;
    s<<ga.toString()<<std::endl;
    return s.str();
}

ReceiptMail::~ReceiptMail() {
}

string ReceiptMail::sendReceipt() const {
    return "Send Recipt by mail";
}
