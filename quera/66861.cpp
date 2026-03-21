#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1, res = 1, tot = 1;
    while (tot < n)
    {
        res += (++c);
        tot = 2;
        for (int i = 2; i < res; i++) if (res % i == 0) tot++;
    }
    cout << res << endl;
    return 0;
}