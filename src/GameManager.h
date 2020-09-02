//
// Created by felip on 2/9/2020.
//

#ifndef LAB04_SOLID_GAMEMANAGER_H
#define LAB04_SOLID_GAMEMANAGER_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Receipt.h"
#include "InventoryManager.h"

class GameManager {
public:
    std::string purchase(Receipt* receipt);
    static std::string read(const std::string &filename);
    static void write(Game* saveGame, const std::string &filename);
};


#endif //LAB04_SOLID_GAMEMANAGER_H
