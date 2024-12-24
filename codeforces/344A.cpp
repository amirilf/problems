#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,r=1;
    cin >> n;

    char las,cur;
    cin >> las >> las;
    for (int i = 1; i < n; i++)
    {
        cin >> cur >> cur;
        if (cur != las) {
            r++;
            las = cur;
        } 
    }
    cout << r << endl;
    return 0;
}