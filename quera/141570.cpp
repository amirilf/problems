#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (a == 0 ? "out" : (a < 7) ? "white" : "black") << endl;
    return 0;
}