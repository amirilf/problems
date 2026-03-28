#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    long long l, r;
    cin >> l >> r;
    for(long long p = l; p <= r; p++) cout << (__builtin_popcountll(p - 1) % 2 == 0 ? '1' : '0');
    cout << endl;
    return 0;
}