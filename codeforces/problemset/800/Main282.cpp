#include <iostream>

using namespace std;

int main()
{

    int t, res = 0;
    string str;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        cin >> str;

        if (str[1] == '-')
            res--;
        else
            res++;
    }

    cout << res << endl;
    return 0;
}