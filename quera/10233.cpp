#include <iostream>

using namespace std;

int main()
{
    string a, res = "";
    cin >> a;
    int alen = a.length(), fin = -1;
    for (int i = alen - 2; i >= 0; i--) {
        bool found = false;
        for (int j = alen - 1; j > i; j--) 
            if (a[j] > a[i]) { 
            char tmp = a[j]; a[j] = a[i]; a[i] = tmp;
            for (int k = alen - 1; k > i; k--) res.push_back(a[k]);
            fin = i; break;
            }
        if (fin != -1) break;
    }
    cout << (fin == -1 ? "0" : (a.substr(0,fin + 1) + res)) << endl;
}