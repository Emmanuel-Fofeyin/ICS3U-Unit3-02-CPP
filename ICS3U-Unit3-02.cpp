// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Emmanuel
// Created on: oct 2022
// This program is a number guessing game

#include <iomanip>
#include <iostream>

int main() {
    // creating variables
    const int NUMBER = 7;
    int guessNumber;

    // input
    std::cout << "Guess a number from 0 - 9:";
    std::cin >> guessNumber;

    // process and output
    if (NUMBER == guessNumber) {
        std::cout << "\nYou guessed right.";
    }
    if (NUMBER != guessNumber) {
        std::cout << "\nYou guessed wrong, try again.";
    }

    std::cout << "\n\n\nDone.\n";
}
