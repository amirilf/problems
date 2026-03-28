#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    string a = "0123456789ABCDEF", n;
    cin >> n;
    long in = n.length() - 1;
    bool c = true;
    while (in > -1 && c)
    {
        if (n[in] == 'F') n[in--] = '0';
        else {
            n[in] = a[a.find(n[in]) + 1];
            c = false;
        }
    }
    cout << (c ? "1" : "") << n << endl;
    return 0;
}

