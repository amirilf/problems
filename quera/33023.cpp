#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    int tab[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) 
            cin >> tab[i][j];
    
    int res = 0;
    for (int i = 1; i < r - 1; i++) {
        for (int j = 1; j < c - 1; j++) {
            int *d = &tab[i][j];
            if (
                (   
                    tab[i-1][j] < *d &&
                    tab[i+1][j] < *d &&
                    tab[i][j-1] > *d &&
                    tab[i][j+1] > *d
                )
                ||
                (
                    tab[i-1][j] > *d&&
                    tab[i+1][j] > *d&&
                    tab[i][j-1] < *d&&
                    tab[i][j+1] < *d
                )
            )
                res++;
        }
    }
    cout << res << endl;
    return 0;
}
