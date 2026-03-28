#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    string n = "0123456789ABCDEF", res = "";
    long num,base,mod;
    cin >> num >> base;
    while (true) {
        mod = num % base;
        num /= base;
        res.push_back(n[mod]);
        if (num == 0) break;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}