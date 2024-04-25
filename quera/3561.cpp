#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int rows = (4 * n) + 1;
    int columns = (8 * n) + 1;
    int spaces = (columns - 1) / 2;

    for (int row = 0; row < rows; row++)
    {
        cout << string(spaces--, ' ');
        int spaces = 2 * row - 9;
        int remaindar = row % 4;
        int spaceBetweenTwoStars = remaindar * 2 - 1;

        if (remaindar)
        {
            string line = '*' + string(spaceBetweenTwoStars, ' ') + '*';

            while (spaces > 0)
            {
                line += string(6 - spaceBetweenTwoStars, ' ') + '*' + string(spaceBetweenTwoStars, ' ') + "*";
                spaces -= 8;
            }
            cout << line << endl;
        }
        else
            cout << string((((row / 4) * 8) + 1), '*') << endl;
    }

    return 0;
}