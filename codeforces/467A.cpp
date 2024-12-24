#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,r=0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l,c;
        cin >> l >> c;
        if (c - l >= 2)
            r++;
    }
    cout << r << endl;
    return 0;
}