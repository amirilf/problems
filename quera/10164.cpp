#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int res = 0;
    vector<pair<int, int>> dots;
    string s[7];
    for (int i = 0; i < 7; i++) {
        cin >> s[i];
        for (int j = 0; j < 7; j++) if (s[i][j] == '.') dots.push_back({i, j});
    }
    for (pair<int, int> dot : dots) {
        if (dot.first > 1 && s[dot.first - 2][dot.second] == 'o' && s[dot.first - 1][dot.second] == 'o') res++;
        if (dot.first < 5 && s[dot.first + 2][dot.second] == 'o' && s[dot.first + 1][dot.second] == 'o') res++;
        if (dot.second > 1 && s[dot.first][dot.second - 2] == 'o' && s[dot.first][dot.second - 1] == 'o') res++;
        if (dot.second < 5 && s[dot.first][dot.second + 2] == 'o' && s[dot.first][dot.second + 1] == 'o') res++;
    }
    cout << res << endl;
    return 0;
}