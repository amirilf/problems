#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, res; cin >> n; bool uno; string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s; res = 0; uno = false;
        for (int j = 0; j < s.size(); j++) { if (s[j] == '0') uno = true; else if (uno) { res++; uno = false; } }
        cout << ((res == 0 && s[0] == '0') ? 1 : res + uno) << endl;
    }
    return 0;
}