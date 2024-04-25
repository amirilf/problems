#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    if (str == "shanbe" || str == "doshanbe" || str == "chaharshanbe")
        cout << "perspolis" << endl;
    else if (str == "jome")
        cout << "tatil" << endl;
    else
        cout << "bahman" << endl;

    return 0;
}