// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: June 2021
// This program rounds a number

#include <iostream>
#include <string>
#include <cmath>

void RoundNumber(float &number, int &decimals) {
    // Changes rounding by reference

    // Process and output
    number = number * pow(10, decimals) + 0.5;
    // I learned to convert a floating point number to an integer using:
    // https://en.cppreference.com/w/cpp/language/static_cast
    number = static_cast<int>(number);
    number = number * pow(10, (-1 * decimals));
}


main() {
    // This function calls CalculateVolume

    // Declaring variables
    std::string inputNumber;
    std::string inputDecimals;
    float numberFloat;
    int decimalsInteger;

    // Input
    std::cout << "Enter a number to round: ";
    std::cin >> inputNumber;
    std::cout << "Enter how many decimal places to round to: ";
    std::cin >> inputDecimals;

    // Process and Output
    try {
        numberFloat = std::stof(inputNumber);
        decimalsInteger = stoi(inputDecimals);
        if (decimalsInteger >= 0) {
            // Call RoundNumber
            RoundNumber(numberFloat, decimalsInteger);
            std::cout << "The rounded number is " << numberFloat << std::endl;
        } else {
            std::cout << "Invalid input" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
