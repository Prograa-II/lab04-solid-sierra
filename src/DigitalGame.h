//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include "IReplaceable.h"
#include "InventoryManager.h"
#include "Game.h"

class DigitalGame: public Game, IReplaceable, InventoryManager{
public:
    DigitalGame();

    DigitalGame(double price, double tax, double discount, const std::string &name);

    std::string toString() override;

    void save(const std::string &filename) override;

    ~DigitalGame();
};


#endif //LAB04_SOLID_DIGITALGAME_H
