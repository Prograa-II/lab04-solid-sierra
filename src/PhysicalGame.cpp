//
// Created by felip on 24/8/2020.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame() {}


double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

const std::string &PhysicalGame::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGame::setProductDimensions(const std::string &productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
}

std::string PhysicalGame::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax()
           << "\nPrice with Discount: $" << calculatePriceWithDiscount();

    return output.str();
}


std::string PhysicalGame::save() {
    return toString();
}

PhysicalGame::PhysicalGame(double price, double tax, double discount, const std::string &name, double itemWeight,
                           const std::string &productDimensions) : Game(price, tax, discount, name), itemWeight(itemWeight),
                                                                   productDimensions(productDimensions) {}
PhysicalGame::~PhysicalGame() {
}

