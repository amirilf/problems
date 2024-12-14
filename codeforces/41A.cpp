#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string a,b;
    cin >> a >> b;
    int la = a.length();

    if (la == b.length()) {
        for (int i = 0; i < la; i++)
        {
            if (a[i] != b[la-i-1]) {
                cout << "NO" << endl;
                return 0;
            }
        }    
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
    return 0;
}