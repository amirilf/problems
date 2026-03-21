#include <iostream>

using namespace std;

int main()
{
    string s,res = "";
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '=') { if (res.length() > 0) res.pop_back(); }
        else res.push_back(s[i]);
    }
    cout << res << endl;
    return 0;
}