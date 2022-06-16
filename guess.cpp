// Copyright (c) 2022 Ethan Prieur All rights reserved

// Created by Ethan Prieur
// Created on June 2022
// This program is the number guessing game

#include <iostream>

int main()  {
    // this function can tell the user if the number they guessed is correct

    const int NUMBER = 5;
    int guessed_number;

    // input
    std::cout << "Guess a number (0-9):" << std::endl;
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process
    if (guessed_number == NUMBER) {
        // output
        std::cout << "You are right!! :)" << std::endl;
    }


    if (guessed_number != NUMBER) {
        // output
        std::cout << "You are wrong! :(" << std::endl;
    }
}
