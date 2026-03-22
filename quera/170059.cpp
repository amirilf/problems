#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << ((a == b) ? 0 : a + b == 5 ? 2 : 1) << endl;
    return 0;
}