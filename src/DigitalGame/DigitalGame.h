//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include "IReplaceable.h"
#include "InventoryManager.h"
#include "Game.h"

class DigitalGame: public Game, IReplaceable, InventoryManager{
private:
    std::string filePath;
public:
    DigitalGame();

    const std::string &getFilePath() const;

    void setFilePath(const std::string &filePath);

    DigitalGame(double price, double tax, double discount, const std::string &name);

    std::string toString() override;

    void save(const std::string &filename) override;
};


#endif //LAB04_SOLID_DIGITALGAME_H
