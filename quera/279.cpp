#include <bits/stdc++.h>

using namespace std;

long fun(long a, long k) {
    long t = 1, d = 1;
    for (long i = 1; i <= k; i++) d *= i;
    for (long i = a - k + 1; i <= a; i++ ) t *= i;
    return t / d;
}

int main()
{
    long a, x, n, res = 0;
    cin >> a >> x >> n;
    for (long k = 0; k <= n; k++) res += fun(n, k) * powl(x, k) * powl(a, n - k);
    cout << res << endl;
    return 0;
}
