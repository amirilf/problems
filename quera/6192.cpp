#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    vector<long> b1(3), b2(3);
    for (long &i : b1) cin >> i; for (long &i : b2) cin >> i;
    sort(b2.begin(), b2.end());
    if ((b2[0] <= b1[0] && b2[1] <= b1[1]) || (b2[0] <= b1[1] && b2[1] <= b1[0])) cout << "zende mimuni" << endl; 
    else cout << "dari mimiri" << endl;
    return 0;
}
