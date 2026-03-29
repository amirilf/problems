#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << #x << ": " << x << endl;

int main()
{
    int n, res = 0, in = 2;
    cin >> n;
    while (true) { if (n % in == 0) { cout << n / in << endl; return 0; } in++; }
}