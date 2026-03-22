#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    long a,b;
    cin >> a >> b;
    cout << gcd(abs(a), abs(b)) << endl;
    return 0;
}