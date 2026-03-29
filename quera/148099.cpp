#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, res = 0, in;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> in; res ^= in; }
    cout << res << endl;
    return 0;
}