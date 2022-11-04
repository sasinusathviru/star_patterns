#include <iostream>

using namespace std;

int main()
{
    cout << "Star Square" << endl;

    int rows;

    cout << "Enter the Number of Rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cin.get();
    cin.get();

    return 0;
}