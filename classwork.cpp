/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// In-Class Examples
// greet procedure

// goodbye procedure


// TODO: Create squareNum
void squareNum(int n)
{
    std::cout << "The square of " << n << " is " << (n*n) << std::endl;
}
// TODO: Create distance
void distance(double x, double y)
{
    double dist = abs(x-y); // in math, the distance is |x-y|
    std::cout << "The distance between " << x << " and " << y << " is " << dist << std::endl;
}

// TODO: Create rollDice
void rollDice()
{
    int number = rand() % 6 + 1; // formula from AI
    std::cout << "You rolled a " << number , std::endl;
}

int main()
{
    // You can follow along with any code in class here
greet();
squareNum(5);
squareNum(-3);    

distance (2.8,-3.5);

srand(time(0)); //plant my seed with the current time
roll Dice();
rollDice();
rollDice();
    return 0;
}
