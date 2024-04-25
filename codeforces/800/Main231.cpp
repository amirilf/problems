#include <iostream>

using namespace std;

int main()
{

    int t, res = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum > 1)
            res++;
    }

    cout << res << endl;

    return 0;
}