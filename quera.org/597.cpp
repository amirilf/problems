#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }

    int location;
    switch (n % 4)
    {
    case 1:
        location = (n - 1) / 4;
        cout << -location << " " << -location << endl;
        break;
    case 2:
        location = (n + 2) / 4;
        cout << location << " " << -location + 1 << endl;
        break;
    case 3:
        location = (n + 1) / 4;
        cout << location << " " << location << endl;
        break;
    case 0:
        location = n / 4;
        cout << -location << " " << location << endl;
        break;
    }

    return 0;
}