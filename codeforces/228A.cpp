#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int res=0;
    int nums[4];
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];
        for (int j = 0; j < i; j++)
            if (nums[j] == nums[i]) {
                res++;
                break;
            }
    }
    cout << res << endl;
    return 0;
}