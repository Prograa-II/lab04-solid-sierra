//
// Created by felip on 24/8/2020.
//

#include "ReceiptWeb.h"
ReceiptWeb::ReceiptWeb(int rNum) : Receipt(rNum) {

}

string ReceiptWeb::toString(Game &ga) const {
    std::ostringstream s;
    s<<"MAIL RECEIPT: "<<std::endl;
    s<<ga.toString()<<std::endl;
    return s.str();
}

ReceiptWeb::~ReceiptWeb() {
}

string ReceiptWeb::sendReceipt() const {
    return "Send Recipt by Web";
}
