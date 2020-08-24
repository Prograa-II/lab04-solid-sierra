//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H
#include "IReplaceable.h"
#include "InventoryManager.h"
#include "Game.h"

class StreamingGame: public Game, IReplaceable, InventoryManager{
public:
    StreamingGame();

    StreamingGame(double price, double tax, double discount, const std::string &name);

    std::string toString()const override;

    void save(const std::string &filename) override;
};


#endif //LAB04_SOLID_STREAMINGGAME_H
