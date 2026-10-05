#include "core/Game.h"

#include <iostream>

Game::Game(std::string title) : title_(std::move(title)) {}

void Game::run() const {
    std::cout << "=== " << title_ << " ===\n";
    std::cout << "Estructura base lista.\n";
    std::cout << "Siguientes pasos sugeridos:\n";
    std::cout << "1) Definir estados del juego (menu, historia, combate, etc.).\n";
    std::cout << "2) Crear sistema de personajes y dialogos.\n";
    std::cout << "3) Separar logica, datos y renderizado por modulos.\n";
}
