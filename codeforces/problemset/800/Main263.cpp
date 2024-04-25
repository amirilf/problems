#include <iostream>

using namespace std;

int main()
{

    int r, c, x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x)
            {
                r = i;
                c = j;
            }
        }
    }

    cout << (abs(r - 2) + abs(c - 2)) << endl;

    return 0;
}