#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int r,c,b, br, bc;
    cin >> r >> c >> b;
    int mx[r+2][c+2] = {0};
    for (int i = 0; i < b; i++)
    {
        cin >> br >> bc;
        mx[br][bc] = -1;
        for (int ir = -1; ir <= 1 ; ir++)
            for (int ic = -1; ic <= 1; ic++)
                if (mx[br + ir][bc + ic] != -1) mx[br + ir][bc + ic]++;
    }
    for (int ir = 1; ir <= r; ir++) {
        for (int ic = 1; ic <= c; ic++) {
            if (mx[ir][ic] == -1) cout << "* ";
            else cout << mx[ir][ic] << " ";
        }
        cout << endl;
    }
    return 0;
}
