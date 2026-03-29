#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n;
    vector<int> arr = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cin >> n;
    if (find(arr.begin(), arr.end(), n) != arr.end()) cout << "zoj" << endl;
    else cout << "fard" << endl;
    return 0;
}