//
// Created by felip on 24/8/2020.
//

#include "Price.h"

Price::Price() {}


double Price::getPrice() const {
    return price;
}

void Price::setPrice(double price) {
    Price::price = price;
}

double Price::getTax() const {
    return tax;
}

void Price::setTax(double tax) {
    Price::tax = tax;
}

double Price::calculatePriceWithTax(){
    price = price + (price*tax);
    return price;
}

Price::Price(double price, double tax, double discount) : price(price), tax(tax), discount(discount) {}

double Price::getDiscount() const {
    return discount;
}

void Price::setDiscount(double discount) {
    Price::discount = discount;
}

double Price::calculatePriceWithDiscount(){
    price = price - (price*discount);
    return price;
}




