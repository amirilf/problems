#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n;
    cin >> n;
    bool c = false;
    for (int i = 1; i < n; i++)
    {
        cout << ((c) ? "I love that " : "I hate that ");
        c = ((c) ? false : true);
    } 
    cout << ((c) ? "I love it" : "I hate it") << endl;
    return 0;
}