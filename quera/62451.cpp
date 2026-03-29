#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 == v2) cout << "WAIT WAIT" << endl;
    else if ((x1 > x2 && v1 > v2) || (x1 < x2 && v1 < v2)) cout << "BORO BORO" << endl;
    else cout << "SEE YOU" << endl;
    return 0;
}