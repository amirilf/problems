#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int max = -1, in, a;
    for (int i = 1; i <= 12; i++) { cin >> a; if (a > max) in = i, max = a; }
    cout << ((in / 3) + (in % 3 != 0)) << endl;
    return 0;
}