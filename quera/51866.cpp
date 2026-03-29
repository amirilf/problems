#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, k, mn = 5001, mx = -1, res = -1; cin >> n >> k;
    vector<int> c(n); 
    for (int &i : c) { cin >> i; if (i < mn) mn = i; if (i > mx) mx = i; }
    cout << (k == 1 ? mx : (k == 2 ? min(c[0], c[n-1]) : mn)) << endl;
    return 0;   
}