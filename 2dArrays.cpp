// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in December 2022
// A program that makes a 2d array,
// prints the randomly generated numbers in
// each of the arrays, and adds them up.

#include <iostream>
#include <random>

template <int rows, int columns>
int AddNumbersIn2dArrays(int (&array)[rows][columns]) {
    // Adds all of the numbers in an array

    int sum = 0;

    for (int counter = 0; counter < rows; counter++) {
        for (int counterAlt = 0; counterAlt < columns; counterAlt++) {
            sum += array[counter][columns];
        }
    }

    return sum;
}

int main() {
    // Gets input, generates numbers and calls functions

    const int rows = 2;
    const int columns = 3;
    int sumOfAllNumbers;
    int array2d[rows][columns];
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 50);

    std::cout << "Amount of rows: " << rows;
    std::cout << std::endl;
    std::cout << "Amount of columns: " << columns;
    std::cout << std::endl;
    std::cout << std::endl;
    for (int counter = 0; counter < rows; counter++) {
        for (int counterAlt = 0; counterAlt < columns; counterAlt++) {
            int randomNumber = idist(rgen);
            array2d[counter][columns] = randomNumber;
            std::cout << array2d[counter][columns] << " ";
        }
        std::cout << std::endl;
    }
    sumOfAllNumbers = AddNumbersIn2dArrays(array2d);
    std::cout << std::endl;
    std::cout << "The sum of these numbers is " << sumOfAllNumbers << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
