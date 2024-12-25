#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n;
    char chr;
    cin >> n;
    vector<int> arr(26,0);
    for (int i = 0; i < n; i++) {
        cin >> chr;
        chr -= ((chr > 90) ? 32 : 0);
        arr[chr - 'A']++;
    }
    for (int i = 0; i < 26; i++)
        if (arr[i] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    return 0;
}