#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    long long n,r=0;
    cin >> n;
    cout << ((n%2==0) ? n/2 : -((n+1)/2)) << endl;
    return 0;
}