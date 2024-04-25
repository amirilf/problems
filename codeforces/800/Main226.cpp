#include <iostream>

using namespace std;

int main()
{

    int n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    char last = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] == last)
            c++;
        else
            last = s[i];
    }
    cout << c << endl;
    return 0;
}