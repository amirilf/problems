#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string w1,w2;
    cin >> w1 >> w2;
    for (int i = 0; i < w1.length(); i++)
        cout << ((w1[i] == w2[i]) ? "0" : "1");
    cout << endl;
    return 0;
}