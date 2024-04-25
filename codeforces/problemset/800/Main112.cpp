#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; s1[i]; i++)
    {

        int x = (s1[i] < 97) ? s1[i] + 32 : s1[i];
        int y = (s2[i] < 97) ? s2[i] + 32 : s2[i];

        if (x > y)
        {
            cout << 1 << endl;
            return 0;
        }
        else if (x < y)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}