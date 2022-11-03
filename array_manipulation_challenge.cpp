#include <iostream>

int main(void)
{
    /*
        Get 8 Numbers from the user
        Store numbers in an array
        Print out numbers from the array
    */

    int array[8];

    std::cout << "Enter 8 Numbers\n";
    for(int i = 0; i < 8; i++)
    {
        std::cin >> array[i];
    }

    std::cout << "Here are your entered numbers\n";
    for(int i = 0; i < 8; i++)
    {
        std::cout << array[i] << ", ";
    }

    std::cout << std::endl;

    return 0;
}