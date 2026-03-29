#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n; cin >> n;
    unsigned long long res = 0, a, b;
    for (int i = 0; i < n; i++) { cin >> a >> b; res += (a * b); }
    cout << res << endl;
    return 0;
}