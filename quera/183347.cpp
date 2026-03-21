#include <iostream>

using namespace std;

int main()
{
    long a, b = 1;
    int c = 0;
    cin >> a;
    while (b < a)
    {
        b *= 2;
        c++;
    }
    cout << ((b == a) ? c : c - 1) << endl;
    return 0;
}