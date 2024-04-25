#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int number = 1;

    for (int row = 0; row < rows; row++)
    {
        if (row % 2)
        {
            number += columns;
            for (int column = 1; column <= columns; column++)
                cout << number - column << " ";
        }
        else
            for (int column = 0; column < columns; column++)
                cout << number++ << " ";

        cout << endl;
    }

    return 0;
}