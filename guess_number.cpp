#include <stdlib.h>
#include <iostream>
#include <time.h>


int main(void)
{
    /*
        User has 8 tries to guess a randomly generated number between 1 and 8
        Program tells user whether the guess is too high or low each time
    */

    srand(time(NULL));

    int number = rand() % 8 + 1;
    int tries = 0;
    int userGuess = 0;

    std::cout << "Welcome to the great number guessing game!\n" << "Let's start!!\n";

    while(tries < 8)
    {
        std::cout << "Make a guess!\n";
        std::cin >> userGuess;
        if(userGuess == number)
        {
            std::cout << "Guess correct!\n" << "Number was " << number << ". Goodjob!!\n";
            return 0;
        }
        else if(userGuess > number)
            std::cout << "Guess too high.\n";
        else if( userGuess < number)
            std::cout << "Guess to low\n";

        tries += 1;
    }

    std::cout << "Too bad the number was" << number << ".\n";

    return 0;
}