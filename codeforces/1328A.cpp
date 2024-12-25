#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << ((a >= b) ? ((a % b != 0) ? b - (a % b) : 0) : (b - a)) << endl;
    }
    return 0;
}