//
// Created by Maikol Guzman on 8/17/20.
//

#include <iomanip>
#include <fstream>
#include "Game.h"

const std::string &Game::getName() const {
    return name;
}

void Game::setName(const std::string &name) {
    Game::name = name;
}

Game::Game(double price, double tax, double discount, const std::string &name) : Price(price, tax, discount),
                                                                                 name(name) {}

Game::Game() {}


Game::~Game() {
}


