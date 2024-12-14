#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,a=0;
    char w;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w;
        a += ((w == 'A') ? 1 : -1);
    }

    if (a==0)
        cout << "Friendship" << endl;
    else
        cout << ((a > 0) ? "Anton" : "Danik") << endl;
    
    return 0;
}