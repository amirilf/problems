#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n;
    cin >> n;
    int t = 0;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        t += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int tt = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        tt+=arr[i];
        res++;
        if (tt > t/2)
            break;
    }

    cout << res << endl;
    return 0;
}