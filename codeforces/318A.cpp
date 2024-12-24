#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    long long n,k;
    cin >> n >> k;
    if (n%2==1)
        n++;
    cout << ((k > n/2) ? (k - (n/2)) * 2 : (k*2)-1);
    return 0;
}