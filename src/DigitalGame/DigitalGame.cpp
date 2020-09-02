//
// Created by felip on 24/8/2020.
//

#include "DigitalGame.h"

std::string DigitalGame::toString()  {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax()
           << "\nPrice with Discount: $" << calculatePriceWithDiscount();

    return output.str();
}


std::string DigitalGame::save() {
    return toString();
}

DigitalGame::DigitalGame() {}

DigitalGame::DigitalGame(double price, double tax, double discount, const std::string &name) : Game(price, tax, discount, name) {}


DigitalGame::~DigitalGame() {
}

