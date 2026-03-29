#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int a,b; cin >> a >> b;
    if (a == 0 && b == 0) cout << "infinite" << endl;
    else if (a == 0) cout << "invalid" << endl;
    else cout << "unique" << endl;
    return 0;
}