#include <iostream>

using namespace std;

int main()
{
    int f,s,fi,si,res = 0, m[30] = {0};
    cin >> f >> s;
    for (int i = 0; i < f + s; i++)
    {
        cin >> fi >> si;
        for (int j = fi - 1; j < si; j++) m[j]++;
    }    
    for (int i = 0; i < 30; i++) res += (m[i] == 2);
    cout << res << endl;
    return 0;
}