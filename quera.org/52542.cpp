#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        if (number < 4)
            cout << string(number, '*') << endl;
        else
            cout << "*" << endl;
    }

    return 0;
}