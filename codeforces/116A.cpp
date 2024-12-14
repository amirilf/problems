#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x << ": " << x << endl;

int main()
{
    int n,last=0,in,out,min=-1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> out >> in;
        last += in - out;
        if (last > min)
            min = last;
    }
    cout << min << endl;
    return 0;
}