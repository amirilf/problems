#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << max(0, 2 * k - n - 1) << endl;
    return 0;
}