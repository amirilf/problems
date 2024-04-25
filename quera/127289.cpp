#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    switch (n % 8)
    {
    case 1:
        cout << 'c' << endl;
        break;
    case 2:
        cout << 'o' << endl;
        break;
    case 3:
        cout << 'd' << endl;
        break;
    case 4:
        cout << 'e' << endl;
        break;
    case 5:
        cout << 'c' << endl;
        break;
    case 6:
        cout << 'u' << endl;
        break;
    case 7:
        cout << 'p' << endl;
        break;
    case 0:
        cout << 6 << endl;
        break;
    }

    return 0;
}