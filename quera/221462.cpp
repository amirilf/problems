#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int a = 0,b = 0,c = 0,aa,bb,cc;
    for (int i = 0; i < 7; i++) { cin >> aa >> bb >> cc; a ^= aa; b ^= bb; c ^= cc; }
    cout << a << " " << b << " " << c << endl;
    return 0;
}