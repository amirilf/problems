#include <iostream>

using namespace std;

int main()
{
    string rock;
    cin >> rock;

    switch (rock[0])
    {
    case 'm':
        cout << "yellow" << endl;
        break;
    case 'r':
        cout << "red" << endl;
        break;
    case 'p':
        cout << "purple" << endl;
        break;
    case 't':
        cout << "green" << endl;
        break;
    case 's':
        if (rock[1] == 'p')
            cout << "blue" << endl;
        else
            cout << "orange" << endl;
        break;
    }

    return 0;
}