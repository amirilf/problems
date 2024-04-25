#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    if (b > a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int rem = a % b;

    while (rem != 0)
    {
        a = b;
        b = rem;
        rem = a % b;
    }

    cout << b << endl;

    return 0;
}
