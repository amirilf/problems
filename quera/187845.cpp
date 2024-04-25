#include <iostream>

using namespace std;

int main()
{
    int pigeons, nests;
    cin >> pigeons >> nests;

    if (pigeons > nests)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}