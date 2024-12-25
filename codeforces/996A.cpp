#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,r=0;
    cin >> n;
    int arr[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++){
        r += (n / arr[i]); n -= (n/arr[i]) * arr[i];
    }
    cout << r << endl;
    return 0;
}