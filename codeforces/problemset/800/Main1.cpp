#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;

    long long int x, y;
    x = (a % c == 0) ? a / c : a / c + 1;
    y = (b % c == 0) ? b / c : b / c + 1;

    cout << x * y << endl;
    return 0;
}