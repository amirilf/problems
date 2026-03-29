#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, m, r1 = 0, r2 = 0;
    char c;
    cin >> n >> m;
    for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { cin >> c; if (c == '*') r1++; } }
    for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { cin >> c; if (c == '*') r2++; } }
    cout << r1 << ' ' << r2 << endl;
    return 0;
}