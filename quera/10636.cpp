#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string f,l;
    cin >> n;

    unordered_map<string, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> f >> l;
        freq[f]++;
    }

    int max = 0;
    for (auto &pair : freq) {
        max = (max > pair.second) ? max : pair.second;
    }
    cout << max << endl;
    return 0;

}