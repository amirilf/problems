#include <iostream>

using namespace std;

int main()
{
    int n;
    bool ch[60] = {0};
    string a,b;
    cin >> n >> a;
    for (int i = 0; i < a.length(); i++) ch[a[i] - 'A'] = true;
    for (int test = 0; test < n; test++)
    {
        cin >> b;
        bool val = true;
        for (char c : b) if (a.find(c) == string::npos) { val = false; break; }
        if (val == false) { cout << "No" << endl; continue; }
        for (char c : a) if (b.find(c) == string::npos) { val = false; break; }
        cout << (val ? "Yes" : "No") << endl;    
    }
   return 0;
}