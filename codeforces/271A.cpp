#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

bool check(string s) {
    // if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3])
    //     return false;
    // return true;
    set<char> digs(s.begin(), s.end());
    return digs.size() == s.length();
}

int main()
{
    int n;
    cin >> n;
    while (!check(to_string(++n)));
    cout << n << endl;
    return 0;
}