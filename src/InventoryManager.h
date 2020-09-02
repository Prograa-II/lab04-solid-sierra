//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_INVENTORYMANAGER_H
#define LAB04_SOLID_INVENTORYMANAGER_H
#include <iomanip>
#include <fstream>
class InventoryManager {
public:

   virtual void save(const std::string &filename) = 0;
};

#endif //LAB04_SOLID_INVENTORYMANAGER_H
