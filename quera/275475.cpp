#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m, res = 0, a,b;
    cin >> n >> m;
    vector<int> lis(n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        lis[i] = a - b;
        res += b;
    }
    sort(lis.begin(), lis.end(), greater<int>());
    for (int i = 0; i < n; i++)
        res += (m-- > 0 ? lis[i] : 0);
    cout << res << endl;    
}