//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_PRICE_H
#define LAB04_SOLID_PRICE_H
#include <iostream>

class Price {
private:
    double price;
    double tax;
    double discount;
public:
    Price(double price, double tax, double discount);

    Price();

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    double calculatePriceWithTax();

    double calculatePriceWithDiscount();

    double getDiscount() const;

    void setDiscount(double discount);

    ~Price();
};


#endif //LAB04_SOLID_PRICE_H
