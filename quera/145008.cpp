#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;

    for (int i = 0; i < (n / 2) + 1; i++)
    {
        if (str[i] == str[i + n])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}