#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{

    int x=0,y=0,z=0;
    int n,tx,ty,tz;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tx >> ty >> tz;
        x += tx;
        y += ty;
        z += tz;
    }

    cout << ((!x && !y && !z) ? "YES" : "NO") << endl;
    
    return 0;
}