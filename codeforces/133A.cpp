#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string w;
    cin >> w;
    for (char c: w)
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;    
    return 0;
}