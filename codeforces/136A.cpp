#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n;
    cin >> n;
    vector<int> res(n+1,'\0');

    int c;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        res[c] = i;
    }

    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
    
    return 0;
}