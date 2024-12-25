#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,p,q,num;
    cin >> n >> p;
    int arr[n+1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < p; i++) {
        cin >> num; arr[num]++;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> num; arr[num]++;
    }
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}