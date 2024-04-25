#include <iostream>

using namespace std;

int main()
{
    char r1, r2, l1, l2;
    cin >> r1 >> l1 >> r2 >> l2;

    if (r1 == l1 || r2 == l2 || r1 == l2 || r2 == l1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}