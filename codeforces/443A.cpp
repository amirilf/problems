#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string line;
    getline(cin, line);
    vector<int> alph(26);
    for (int i = 1; i <= line.length()-2; i+=3)
        alph[line[i]-'a']++;
    int res = 0;
    for (int i = 0; i < 26; i++)
        res += ((alph[i] > 0) ? 1 : 0);
    cout << res << endl;
    return 0;
}