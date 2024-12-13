#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{

    string w;
    cin >> w;

    int u = 0;
    for (char ch : w)
        if (ch < 'a')
            u++;
    
    if (w.length() / 2 < u)
        transform(w.begin(), w.end(), w.begin(), [](char ch){return toupper(ch);});
    else 
        transform(w.begin(), w.end(), w.begin(), [](char ch){return tolower(ch);});

    cout << w << endl;

    return 0;
}