#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,r=0;
    cin >> n;
    string l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        switch (l[0])
        {
        case 'T':
            r += 4;
            break;
        case 'C':
            r += 6;
            break;
        case 'O':
            r += 8;
            break;
        case 'D':
            r += 12;
            break;
        default:
            r += 20;
            break;
        }
    }
    cout << r << endl;
    return 0;
}