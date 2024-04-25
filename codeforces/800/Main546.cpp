#include <iostream>

using namespace std;

int main()
{
    long long int k, n, w, t;
    cin >> k >> n >> w;
    t = (((w * (w + 1)) / 2) * k) - n;

    if (t > 0)
        cout << t << endl;
    else
        cout << 0 << endl;
    return 0;
}