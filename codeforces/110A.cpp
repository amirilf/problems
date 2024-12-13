#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string in;
    cin >> in;
    int c = 0;
    for (char chr : in)
        c += ((chr == '4' || chr == '7') ? 1 : 0);
    cout << ((c == 4 || c == 7) ? "YES" : "NO") << endl;
    return 0;
}