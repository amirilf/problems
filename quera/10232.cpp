#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l, res = 0, r, g, dtmp, d = 0, mod;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        dtmp = d;
        cin >> d >> r >> g;
        res += (d - dtmp);
        mod = res % (r + g);
        res += (mod < r ? r - mod : 0);
    }
    cout << res + l - d << endl;
    return 0;
}