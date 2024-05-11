#include <iostream>


#include "engine.h"


/**
 * @brief The primary function of this class is to define
 * the game loop, and interperate user input through
 * CLI. The input will be in standard long algebraic
 * notation.
 * 
 */



Engine::Engine() {

    // game state is initially true.
    state = 1;
}


Engine::~Engine() {
    state = 0;
}


void Engine::gameLoop() {

    std::string input;

    while (state) {

        //TODO display current game board to console

        // wait for user input
        std::cout << "Enter your move: ";
        std::cin >> input;

        std::cout << "Your string was " << input << std::endl;


    }
}






