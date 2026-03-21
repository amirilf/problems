#include <iostream>

using namespace std;

int main()
{
    long a,b;
    cin >> a >> b;
    long c, aa = a, bb = b;

    while (true)
    {
        c = a % b;
        if (c == 0) break;
        a = b;
        b = c;
    }

    cout << b << ' ' << (abs(aa * bb) / b) << endl;
    return 0;
}
