#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{

    char chr=0, lst;
    int c = 0;

    while (chr != 10) {
    
        c = ((chr == lst) ? c+1 : 0);
        lst = chr;
        cin.get(chr);

        if (c == 6){
            cout << "YES" << endl;
            return 0;
        }

    }

    cout << "NO" << endl;
    return 0;
}