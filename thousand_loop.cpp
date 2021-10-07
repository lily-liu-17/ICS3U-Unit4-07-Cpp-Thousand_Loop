// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will print 1000-2000


#include <iostream>

int main() {
    // This program will print 1000-2000
    int end = 2000;
    std::string output;

    for (int counter = 1000; counter <= end; counter++) {
        if (counter % 5 == 0) {
            output = std::to_string(counter);
    } else {
        output += " " + std::to_string(counter);
    }
    if (counter % 5 == 4 || counter == end)
        std::cout << output<< std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
