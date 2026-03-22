#include <iostream>

using namespace std;

int main()
{
   int n, len, diff;
    cin >> n;
    int res[500] = {0};
    string s;
    for (int test = 0; test < n; test++)
    {
        cin >> s;
        len = s.length();
        diff = 500 - len;
        for (int i = 0; i < len; i++) res[diff + i] += (s[i] - '0');           
    }
    for (int i = 499; i >= 1; i--) if (res[i] > 9) { res[i-1] += res[i] / 10; res[i] = res[i] % 10; }
    string r;
    bool dig_found = false;
    for (int i = 0; i < 500; i++)
    {
        if (res[i] != 0) dig_found = true;
        if (dig_found) { dig_found = true; r.push_back('0' + res[i]); }
    }
    cout << r << endl;
    return 0;
}