#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    if (str[0] == 'Y')
        cout << "Haji" << endl;
    else if (str[1] == 'Y')
        cout << "Karbalaee" << endl;
    else if (str[2] == 'Y')
        cout << "Mashti" << endl;
    else
        cout << "Agha" << endl;

    return 0;
}