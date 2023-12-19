#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int degree;
        cin >> degree;

        if (degree > 15)
            cout << "cooler" << endl;
        else
            cout << "heater" << endl;
    }

    return 0;
}