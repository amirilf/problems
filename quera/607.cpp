#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int f[a][b];
    int s[b][c];
    int r[a][c];
    int res;
    for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) cin >> f[i][j];        
    for (int i = 0; i < b; i++) for (int j = 0; j < c; j++) cin >> s[i][j];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
            res = 0;
            for (int k = 0; k < b; k++) { res += f[i][k] * s[k][j]; }
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}
