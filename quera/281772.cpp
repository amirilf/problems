#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << ((str.find('m') == string::npos) ? "Yes" : "No") << endl;
    return 0;
}