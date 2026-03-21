#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    string channels[a];
    for (int i = 0; i < a; i++) cin >> channels[i];
    cout << channels[(b + c - 1) % a] << endl;
    return 0;
}