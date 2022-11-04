#include <iostream>

int main()
{
    int rows;
    std::cout << "Enter the Number of rows: ";
    std::cin >> rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cin.get();
    std::cin.get();

    return 0;
}