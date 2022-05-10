// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

std::vector< int > CalculateFactors(int number) {
    // I calculate volume
    float is_int;
    std::vector< int > factors;

    // process
    int i = 1;
    while (i <= number) {
        if (number % i == 0) {
            factors.push_back(i);
        }
        i++;
    }

    // output
    return factors;
}

main() {
    // I am the main function
    std::string strNumber;
    int intNumber;
    std::vector< int > factors;

    // input
    std::cout << "This program calculates the factors of an integer.";
    std::cout << std::endl;
    std::cout << "Your number is: ";
    std::cin >> strNumber;
    std::cout << std::endl;

    // output
    try {
        intNumber = std::stoi(strNumber);
        factors = CalculateFactors(intNumber);
        std::cout << "Factors: ";
        for (int i = 0; i < factors.size(); i++) {
            std::cout << factors[i];
            if (i == factors.size() - 1) {
                std::cout << std::endl;
            } else {
                std::cout << ", ";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
