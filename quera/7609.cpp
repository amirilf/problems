#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    string str;
    cin >> str;
    int in = 1, len = str.length();    
    while (in < len)
    {
        if (str[in] != str[in-1]) { cout << "bad" << endl; return 0; };
        in += 2;  
    }
    cout << (in == len ? "bad" : "khoob") << endl;
    return 0;
}