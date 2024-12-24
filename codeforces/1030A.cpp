#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        if (r) {
            cout << "HARD" << endl;
            return 0;
        }
        
    }
    cout << "EASY" << endl;
    return 0;
}