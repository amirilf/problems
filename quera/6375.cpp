#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    long long avg = (a + b + c) / 3;
    cout << (a == b && b == c ? 0 : (a == avg || b == avg || c == avg) ? 1 : 2) << endl;
    return 0;
}