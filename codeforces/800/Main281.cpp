#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    if (str[0] < 91)
        cout << str[0];
    else
        cout << (char)(str[0] - 32);
    cout << str.substr(1) << endl;

    return 0;
}