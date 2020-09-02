//
// Created by felip on 24/8/2020.
//

#include "DigitalGame.h"

std::string DigitalGame::toString()  {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nGame Path: " << getFilePath()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax()
           << "\nPrice with Discount: $" << calculatePriceWithDiscount();

    return output.str();
}

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void DigitalGame::save(const std::string &filename) {
    std::ofstream ofs (filename, std::ofstream::out);

    ofs << toString();

    ofs.close();
}

DigitalGame::DigitalGame() {}

DigitalGame::DigitalGame(double price, double tax, double discount, const std::string &name) : Game(price, tax, discount, name) {}

const std::string &DigitalGame::getFilePath() const {
    return filePath;
}

void DigitalGame::setFilePath(const std::string &filePath) {
    DigitalGame::filePath = filePath;
}
