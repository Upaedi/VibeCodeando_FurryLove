#pragma once

#include <string>

class Game {
public:
    explicit Game(std::string title);
    void run() const;

private:
    std::string title_;
};
