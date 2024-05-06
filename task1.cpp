#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    srand(time(0)); 
    int SNum = rand() % 200 + 1; 
    int guess = -1; 
    std::cout << "Try out the Number Guessing Game!!!\n";
    std::cout << "We have already chosen a number from 1 to 200. Try to guess it right!\n";
    for (; guess != SNum;) 
    {
        std::cout << "Enter your guessing here: ";
        std::cin >> guess;
        if (guess > SNum) 
        {
            std::cout << "Too BIG! Try another number.\n";
        } 
        else if (guess < SNum) 
        {
            std::cout << "Too SMALL! Try another number.\n";
        } 
        else 
        {
            std::cout << "Congrats!!! You have guessed the right number.\n";
        }
    }
    return 0;
}