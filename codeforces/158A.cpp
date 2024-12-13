#include <iostream>

using namespace std;

int main()
{
    int n, k, x, l, res = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        l = x;
        cin >> x;

        if (x != 0)
        {
            if (i < k)
                res++;
            else if (x == l)
                res++;
            else
                break;
        }
        else
            break;
    }

    cout << res << endl;
    return 0;
}