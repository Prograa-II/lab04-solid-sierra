//
// Created by felip on 2/9/2020.
//

#include "GameManager.h"

void GameManager::write(InventoryManager *saveGame, const std::string &filename) {
    std::ofstream file (filename, std::ofstream::out);

    file << saveGame->save();

    file.close();
}

std::string GameManager::read(const std::string &filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}

std::string GameManager::purchase(Receipt *receiptSender) {
    return receiptSender->sendReceipt();
}