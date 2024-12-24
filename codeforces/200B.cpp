#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,p;
    double t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        t+=p;
    }
    cout << t/n << endl;
    return 0;
}