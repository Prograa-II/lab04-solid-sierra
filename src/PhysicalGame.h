//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H
#include "Game.h"
#include "InventoryManager.h"
#include "IShippable.h"

class PhysicalGame: public Game, InventoryManager, IShippable {
private:
    double itemWeight;
    std::string productDimensions;
public:
    PhysicalGame();

    PhysicalGame(double price, double tax, double discount, const std::string &name, double itemWeight,
                 const std::string &productDimensions);

    std::string toString() override;

    void save(const std::string &filename) override;

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    const std::string &getProductDimensions() const;

    void setProductDimensions(const std::string &productDimensions);

    ~PhysicalGame();

};


#endif //LAB04_SOLID_PHYSICALGAME_H
