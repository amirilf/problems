#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, x; cin >> n; int farr[n];
    vector<int> a;
    for (int i = 0; i < n; i++) cin >> farr[i];
    for (int i = 0; i < n; i++) { cin >> x; if (x == 1) a.push_back(farr[i]); }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}