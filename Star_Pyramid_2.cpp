#include <iostream>

using namespace std;

int main()
{
    cout << "Star Pyramid" << '\n';

    int rows;

    cout << "Enter Number of Rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cin.get();
    cin.get();

    return 0;
}