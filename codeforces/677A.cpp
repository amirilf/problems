#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,h,person,result=0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> person;
        result += ((person > h) ? 2 : 1);
    }
    cout << result << endl;
    return 0;
}