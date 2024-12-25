#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,min=101,max=-1,mini=-1,maxi=-1,num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > max) {
            max = num; maxi = i;
        }
        if (num <= min) {
            min = num; mini = i;
        }
    }
    cout << maxi + (n - mini) - ((mini > maxi) ? 1 : 2) << endl;
    return 0;
}