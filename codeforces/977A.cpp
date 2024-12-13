#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int a,b;
    cin >> a >> b;
    while (b != 0) {
        if (a % 10 == 0)
            a /= 10;
        else
            a--;
        b--;
    }   
    cout << a << endl;
    return 0;
}