#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    string s; cin >> s;
    int res = 0;
    for (char &i : s) if (i == 'a' || i == 'i' || i == 'o' || i == 'e' || i == 'u') res++;
    cout << res << endl;
    return 0;
}