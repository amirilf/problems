#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{   
    string names[3], name, res = "";
    char pos;
    for (int i = 0, ii = 0; i < 4; i++)
    {
        cin >> name >> pos;
        if (pos != 'U') {
            res = (pos == 'R' ? res + char('0' + ii) : char('0' + ii) + res);
            names[ii++] = name;
        }
    }
    cout << names[res[1] - '0'] << endl;
    return 0;
}