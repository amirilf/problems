#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int a,b,c,d,n,r=0;
    cin >> a >> b >> c >> d >> n;
    for (int i = 1; i <= n; i++)
        r += ((i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0) ? 1 : 0);
    cout << r << endl;
    return 0;
}