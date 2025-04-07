// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if a year is a leap year
#include <iostream>

int main() {
    int year_leap;
    std::cout << "Enter a year: ";
    std::cin >> year_leap;

    if (std::cin.fail()) {
        std::cout << "Invalid input!" << std::endl;
        return 1;  // Return an error code to indicate failure
    }

    if (year_leap % 4 == 0) {
        if (year_leap % 100 == 0) {
            if (year_leap % 400 == 0) {
                std::cout << "It’s a leap year!" << std::endl;
            } else {
                std::cout << "It’s not a leap year!" << std::endl;
            }
        } else {
            std::cout << "It’s a leap year!" << std::endl;
        }
    } else {
        std::cout << "It’s not a leap year!" << std::endl;
    }

    return 0;
}
