//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include "Price.h"
class Game: public Price {
public:
    Game();

    Game(double price, double tax, double discount, const std::string &name);

    const std::string &getName() const;

    void setName(const std::string &name);

    virtual std::string toString() = 0;
private:
    std::string name;
};


#endif //LAB04_SOLID_GAME_H
