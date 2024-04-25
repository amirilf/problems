#include <iostream>

using namespace std;

int main()
{

    int n, m, sum = 0;
    cin >> n >> m;
    int matrix[n][n];

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cin >> matrix[r][c];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        r--;
        c--;

        sum += matrix[r][c];
    }

    cout << sum << endl;
    return 0;
}