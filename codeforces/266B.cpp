#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n, t;
    cin >> n >> t;
    string l;
    cin >> l;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (l[j] == 'B' && l[j+1] == 'G') {
                l[j] = 'G';
                l[j+1] = 'B';
                j++;
            }
        }
    }

    cout << l << endl;

    return 0;
}
