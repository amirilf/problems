#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    string h = "hello";
    int index = 0;

    string w;
    cin >> w;

    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] == h[index]) {
            index++;
            if (index == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}