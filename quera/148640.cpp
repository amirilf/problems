#include <iostream>

using namespace std;

int main()
{
    int qu,nu,res,opt;
    cin >> qu;
    char ans[qu];
    string c;
    cin >> ans >> nu;
    for (int i = 0; i < nu; i++)
    {
        res = 0;
        for (int j = 0; j < qu; j++)
        {
            cin >> c;
            opt = c.find_first_of('#');
            if (opt != -1)
            {
                if (opt == c.find_last_of('#') && ans[j] - 'A' == opt) res += 3;
                else res--;
            }
        }
        cout << res << endl;
    }
    return 0;
}
