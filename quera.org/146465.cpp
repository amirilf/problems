#include <iostream>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    if (n % k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}