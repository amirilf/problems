#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int k; cin >> k;
    for (int i = 0, j = 1; i < 4; i++)
    {
        cout << "########.......########\n";
        if (j <= k) cout << "#ghorfe" << j++ << ".......";
        else { cout << "#.....................#\n"; continue; }
        if (j <= k) cout << "ghorfe" << j++ << "#\n";
        else cout << ".......#\n";
    }
    cout << "#######################\n";
    return 0;
}