//
// Created by felip on 24/8/2020.
//

#include "StreamingGame.h"
std::string StreamingGame::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax()
           << "\nPrice with Discount: $" << calculatePriceWithDiscount();

    return output.str();
}

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void StreamingGame::save(const std::string &filename) {
    std::ofstream ofs (filename, std::ofstream::out);

    ofs << toString();

    ofs.close();
}

StreamingGame::StreamingGame() {}

StreamingGame::StreamingGame(double price, double tax, double discount, const std::string &name) : Game(price, tax, discount, name) {}
