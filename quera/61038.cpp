#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    long n;
    cin >> n;
    long arr[n];
    for (auto &x : arr) cin >> x;
    long res = arr[0];
    for (int i = 1; i < n; i++) res = (res / gcd(arr[i], res) * arr[i]);
    cout << res % 30 + 1 << endl;
    return 0;
}